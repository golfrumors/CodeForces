#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int maxR = 0;
        int sum = 0;
        int s = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > r) {
                sum = 0;
                s = i + 1;
                continue;
            }

            sum += a[i];
            
            while (sum < l && i < n - 1) {
                i++;
                sum += a[i];
            }

            if (sum >= l && sum <= r) {
                maxR++;
                sum = 0;
                s = i + 1;
            }
            else if (sum > r) {
                sum = 0;
                i = s;
                s++;
            }
        }

        cout << maxR << '\n';
    }
    return 0;
}
