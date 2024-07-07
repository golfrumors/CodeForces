#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 5010;
const int INF = 1e18;

int numN, dp[MAXN][MAXN];
vector<int> chi[MAXN];
int nodeV[MAXN], minOp[MAXN];

void dfs(int node) {
    if (chi[node].empty()) {
        for (int i = 1; i <= numN; i++) {
            dp[node][i] = INF;
        }
        minOp[node] = 0;
        return;
    }
    
    int sumCV = 0;
    minOp[node] = 0;
    for (auto child : chi[node]) {
        dfs(child);
        minOp[node] += minOp[child];
        sumCV += nodeV[child];
    }
    
    int def = nodeV[node] - sumCV;
    for (int i = 1; i <= numN; i++) {
        if (def <= 0) break;
        for (auto child : chi[node]) {
            if (def <= 0) break;
            if (dp[child][i] <= def) {
                minOp[node] += i * dp[child][i];
                def -= dp[child][i];
                dp[child][i] = 0;
            } else {
                minOp[node] += i * def;
                dp[child][i] -= def;
                def = 0;
            }
        }
    }
    
    if (def < 0) dp[node][1] = -def;
    for (int i = 2; i <= numN; i++) {
        int sumT = 0;
        for (auto child : chi[node]) {
            if (dp[child][i - 1] == INF) {
                sumT = INF;
                break;
            }
            sumT += dp[child][i - 1];
        }
        dp[node][i] = sumT;
    }
}

void solve() {
    cin >> numN;
    for (int i = 1; i <= numN; i++) {
        cin >> nodeV[i];
        chi[i].clear();
    }
    
    for (int i = 1; i <= numN; i++) {
        minOp[i] = 0;
        for (int j = 1; j <= numN; j++) {
            dp[i][j] = 0;
        }
    }
    
    for (int i = 2; i <= numN; i++) {
        int p;
        cin >> p;
        chi[p].push_back(i);
    }
    
    dfs(1);
    cout << minOp[1] << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
