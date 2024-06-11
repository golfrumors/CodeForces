#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<string> g(n);
        for (int i = 0; i < n; ++i) {
            cin >> g[i];
        }
        
        int cnt = 0;
        long long sumX = 0, sumY = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (g[i][j] == '#') {
                    sumX += i + 1;
                    sumY += j + 1;
                    cnt++;
                }
            }
        }

        int cenX = (sumX + cnt / 2) / cnt;
        int cenY = (sumY + cnt / 2) / cnt;
        
        cout << cenX << " " << cenY << endl;
    }
}
