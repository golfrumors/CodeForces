#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int cell) {
  visited[cell] = true;
  for (int neighbor : graph[cell]) {
    if (!visited[neighbor]) {
      dfs(graph, visited, neighbor);
    }
  }
}

int solve(int n, int c) {
  vector<vector<int>> graph(n + 1); // Adjacency list for connections
  for (int i = 0; i < n - 1; ++i) {
    int u, v;
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  // Choose any cell as central cell
  int central_cell = 1;

  vector<bool> visited(n + 1, false);
  dfs(graph, visited, central_cell);

  // Check if all cells are connected
  if (all_of(visited.begin() + 1, visited.end(), [](bool v) { return v; })) {
    return -1;
  }

  // Funding for first complex
  int complex_1_funding = n * n / 2;

  // Funding for second complex (remaining cells)
  int complex_2_funding = complex_1_funding - accumulate(visited.begin() + 1, visited.end(), 0);

  // Total funding
  int total_funding = complex_1_funding + complex_2_funding + c;

  return total_funding;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n, _, c;
    cin >> n >> _ >> c;
    int result = solve(n, c);
    cout << result << endl;
  }
  return 0;
}

