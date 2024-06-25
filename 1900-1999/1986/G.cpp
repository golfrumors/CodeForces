#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

vector<long long> bitCount(1, 0);

void precomputeBitCount(int k) {
    for (int i = bitCount.size(); i < (1LL << (k + 1)); ++i) {
        bitCount.push_back(bitCount[i / 2] + (i % 2));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
        
        precomputeBitCount(k);
        
        vector<long long> validPrefix;
        validPrefix.push_back(0);
        for (int i = 1; i < (1LL << (k + 1)) && i < n; ++i) {
            if (bitCount[i] <= k) {
                validPrefix.push_back(i);
            }
        }
        
        long long ans = 0;
        for (size_t i = 0; i < validPrefix.size(); ++i) {
            for (size_t j = i; j < validPrefix.size(); ++j) {
                if (validPrefix[j] < n) {
                    ans = (ans + (validPrefix[j] - validPrefix[i] + 1)) % MOD;
                }
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}
