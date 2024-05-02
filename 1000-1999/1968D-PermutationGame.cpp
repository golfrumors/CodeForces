#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string whoWins(const vector<int>& p, const vector<int>& a, int n, int k, int pb, int ps) {
  // Use a map to store visited positions and their corresponding cycle scores
  unordered_map<int, int> cycleScores;

  // Calculate cycle score for Bodya's starting position
  int curr = pb;
  int bodyaScore = 0;
  do {
    bodyaScore += a[curr];
    if (!cycleScores.count(curr)) {
      cycleScores[curr] = bodyaScore;
    }
    curr = p[curr];
  } while (curr != pb);

  // Calculate cycle score for Sasha's starting position (if not already calculated)
  int sashaScore = 0;
  if (!cycleScores.count(ps)) {
    curr = ps;
    do {
      sashaScore += a[curr];
      if (!cycleScores.count(curr)) {
        cycleScores[curr] = sashaScore;
      }
      curr = p[curr];
    } while (curr != ps);
  } else {
    sashaScore = cycleScores[ps];
  }

  // Analyze scores and determine winner
  bodyaScore += cycleScores[pb] * ((k - 1) / (p.size() - 1)); // Max cycles Bodya completes
  sashaScore += cycleScores[ps] * ((k - 1) / (p.size() - 1)); // Max cycles Sasha completes
  if (bodyaScore > sashaScore) {
    return "Bodya";
  } else if (bodyaScore < sashaScore) {
    return "Sasha";
  } else {
    return "Draw";
  }
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k, pb, ps;
    cin >> n >> k >> pb >> ps;

    vector<int> p(n), a(n);
    for (int i = 0; i < n; ++i) {
      cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    cout << whoWins(p, a, n, k, pb - 1, ps - 1) << endl;
  }

  return 0;
}

