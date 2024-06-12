#include <iostream>
#include <vector>

using namespace std;

vector<int> precomputeXor(const vector<int>& a) {
    int n = a.size();
    vector<int> xor_prefix(n + 1, 0);  // prefix XOR array

    // Initialize xor_prefix[0] to 0 (empty subarray)
    xor_prefix[0] = 0;

    for (int i = 1; i <= n; ++i) {
        xor_prefix[i] = xor_prefix[i - 1] ^ a[i - 1];
    }
    return xor_prefix;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> xor_prefix = precomputeXor(a);

        while (q--) {
            int l, r;
            cin >> l >> r;

            // Adjust for 0-based indexing (l - 1, r - 1)
            int subarray_xor;
            if (l == r) {
                // Empty subarray, XOR is always 0
                subarray_xor = 0;
            } else {
                subarray_xor = xor_prefix[r - 1] ^ xor_prefix[l - 1];
            }

            if (subarray_xor == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

int main() {
    solve();
    return 0;
}

