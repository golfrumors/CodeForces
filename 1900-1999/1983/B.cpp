#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void ops(vector<vector<int>> &grid, int x, int y) {
    grid[x][y] = (grid[x][y] + 1) % 3;
    grid[x + 1][y] = (grid[x + 1][y] + 2) % 3;
    grid[x][y + 1] = (grid[x][y + 1] + 2) % 3;
    grid[x + 1][y + 1] = (grid[x + 1][y + 1] + 1) % 3;
}

bool solve(vector<vector<int>> a, vector<vector<int>> &b, int n, int m) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            while (a[i][j] != b[i][j]) {
                ops(a, i, j);
            }
        }
    }
    return a == b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m)), b(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++) {
                a[i][j] = s[j] - '0';
            }
        }
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < m; j++) {
                b[i][j] = s[j] - '0';
            }
        }
        if (solve(a, b, n, m)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
