#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
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
        
        long long count = 0;
        for (long long i = 0; i < n; ++i) {
            if (__builtin_popcountll(i) <= k) {
                long long max_len = n - i;
                count = (count + max_len) % MOD;
            }
        }
        
        cout << count << '\n';
    }
    
    return 0;
}
