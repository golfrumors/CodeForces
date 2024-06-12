#include <bits/stdc++.h>

using namespace std;

long long modpow(long long x, long long y, long long z) {
    long long res = 1;
    x %= z;
    if (x == 0) return 0;

    while (y > 0) {
        if (y & 1) {
            res = (res * x) % z;
        }
        y >>= 1;
        x = (x * x) % z;
    }
    return res;
}

int main() {
    int t; cin >> t;

    while (t--) {
        long long l, h, k; cin >> l >> h >> k;

        if (k >= 10) {
            cout << 0 << endl;
            continue;
        }

        long long m = 10 / k;
        if (10 % k) {
            m++;
        }

        long long hCnt = modpow(m, h, 1000000007);
        long long lCnt = modpow(m, l, 1000000007);
        long long ans = (hCnt - lCnt + 1000000007) % 1000000007;

        cout << ans << endl;
    }
}
