#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to compute the prefix function using KMP algorithm
vector<int> computePrefixFunction(const string& s) {
  int n = s.size();
  vector<int> P(n, 0);
  int i = 1, j = 0;
  while (i < n) {
    if (s[i] == s[j]) {
      P[i] = j + 1;
      i++;
      j++;
    } else {
      if (j != 0) {
        j = P[j - 1];
      } else {
        i++;
      }
    }
  }
  return P;
}

// Function to find the maximum LCP achievable for all divisions with k = l
int findMaxLCP(const string& s, int l) {
  int n = s.size();
  vector<int> P = computePrefixFunction(s);
  int maxLCP = 0;
  for (int i = 1; i < n; i++) {
    // Consider cases where P[i] is 0 or greater than 0
    if ((P[i] > 0 && (i + 1) % P[i] == 0) || P[i] == 0) {
      maxLCP = max(maxLCP, P[i]);
    }
  }
  return maxLCP;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, l;
    cin >> n >> l;

    // Read the string input
    string s;
    cin >> s;

    int maxLCP = findMaxLCP(s, l);
    cout << maxLCP << endl;
  }
  return 0;
}

