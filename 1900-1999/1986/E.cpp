#include <bits/stdc++.h>
using namespace std;

#define int long long

void sol(int testIndex) {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    
    map<int, set<int>> remG;
    for(int x : a) {
        if(remG[x % k].find(x) != remG[x % k].end())
            remG[x % k].erase(x);
        else
            remG[x % k].insert(x);
    }
    
    int oddC = 0, oddRem = -1;
    for(auto &g : remG) {
        int size = g.second.size();
        if(size % 2) {
            oddC++;
            oddRem = g.first;
        }
    }
    
    if(oddC > 1) {
        cout << -1 << endl;
        return;
    }
    
    int minOp = 0;
    for(auto &g : remG) {
        if(g.first == oddRem) continue;
        while(!g.second.empty()) {
            int fIt = *g.second.begin();
            g.second.erase(fIt);
            if(g.second.empty()) break;
            int sIt = *g.second.begin();
            g.second.erase(sIt);
            minOp += (sIt - fIt) / k;
        }
    }
    
    if(oddC) {
        vector<int> remElem;
        for(int x : remG[oddRem]) remElem.push_back(x);
        int m = remElem.size();
        if(m == 1) {
            cout << minOp << endl;
            return;
        }
        vector<int> pSum(m, 0), sSum(m, 0);
        pSum[1] = remElem[1] - remElem[0];
        for(int i = 3; i < m; i += 2) {
            pSum[i] = remElem[i] - remElem[i - 1] + pSum[i - 2];
        }
        sSum[m - 2] = remElem[m - 1] - remElem[m - 2];
        for(int i = m - 4; i >= 0; i -= 2) {
            sSum[i] = remElem[i + 1] - remElem[i] + sSum[i + 2];
        }
        int exOps = LLONG_MAX;
        for(int i = 0; i < m; i += 2) {
            int cost = 0;
            if(i > 0) cost += pSum[i - 1];
            if(i + 1 < m) cost += sSum[i + 1];
            exOps = min(exOps, cost);
        }
        minOp += exOps / k;
    }
    cout << minOp << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--)
        sol(t);
    
    return 0;
}
