#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAXN 400000

int binEx(int base, int exp, int mod) {
    int res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (1LL * res * base) % mod;
        }
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return res;
}

int modRev(int x, int mod) {
    return binEx(x, mod - 2, mod);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int A[MAXN];
    long long t; cin >> t;

    while (t--) {
        int n, sp, nsp, al = 0, bob = 0;
        cin >> n >> sp;
        nsp = n - sp;

        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        int a = (nsp + 1) / 2;
        int b = nsp / 2;
        int pa = (1LL * a * modRev(a + b, MOD)) % MOD;
        int pb = (1 - pa + MOD) % MOD;

        for (int i = sp; i < n; ++i) {
            int val = A[i];
            al = (al + 1LL * val * pa) % MOD;
            bob = (bob + 1LL * val * pb) % MOD;
        }

        a = (nsp + 2) / 2;
        b = (nsp + 1) / 2;
        pa = (1LL * a * modRev(a + b, MOD)) % MOD;
        pb = (1 - pa + MOD) % MOD;

        for (int i = 0; i < sp; ++i) {
            int val = A[i];
            al = (al + 1LL * val * pa) % MOD;
            bob = (bob + 1LL * val * pb) % MOD;
        }

        cout << al << ' ' << bob << endl;
    }

    return 0;
}

