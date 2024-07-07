#include <bits/stdc++.h>

using namespace std;

#define int long long

int res[6];

bool part(vector<int>& x, vector<int>& y, vector<int>& z, int total) {
    bool f[3] = {false, false, false};
    int n = x.size();
    int j = 0;
    int sum = 0;
    res[0] = 1;
    for (j = 0; j < n; ++j) {
        sum += x[j];
        res[1] = j + 1;
        if (sum >= (total + 2) / 3) {
            ++j;
            f[0] = true;
            break;
        }
    }
    sum = 0;
    res[2] = j + 1;
    for (; j < n; ++j) {
        sum += y[j];
        res[3] = j + 1;
        if (sum >= (total + 2) / 3) {
            ++j;
            f[1] = true;
            break;
        }
    }
    sum = 0;
    res[4] = j + 1;
    for (; j < n; ++j) {
        sum += z[j];
        res[5] = j + 1;
        if (sum >= (total + 2) / 3) {
            ++j;
            f[2] = true;
            break;
        }
    }
    return f[0] && f[1] && f[2];
}

bool chkPerm(int i, vector<int>& a, vector<int>& b, vector<int>& c, int total) {
    vector<int> aa = a, bb = b, cc = c;
    if (i == 0) return part(aa, bb, cc, total);
    if (i == 1) return part(aa, cc, bb, total);
    if (i == 2) return part(bb, aa, cc, total);
    if (i == 3) return part(bb, cc, aa, total);
    if (i == 4) return part(cc, aa, bb, total);
    if (i == 5) return part(cc, bb, aa, total);
    return false;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];

    int total = accumulate(a.begin(), a.end(), 0LL);

    for (int i = 0; i < 6; ++i) {
        if (chkPerm(i, a, b, c, total)) {
            res[5] = n;
            if (i == 0) cout << res[0] << " " << res[1] << " " << res[2] << " " << res[3] << " " << res[4] << " " << res[5] << "\n";
            if (i == 1) cout << res[0] << " " << res[1] << " " << res[4] << " " << res[5] << " " << res[2] << " " << res[3] << "\n";
            if (i == 2) cout << res[2] << " " << res[3] << " " << res[0] << " " << res[1] << " " << res[4] << " " << res[5] << "\n";
            if (i == 3) cout << res[4] << " " << res[5] << " " << res[0] << " " << res[1] << " " << res[2] << " " << res[3] << "\n";
            if (i == 4) cout << res[2] << " " << res[3] << " " << res[4] << " " << res[5] << " " << res[0] << " " << res[1] << "\n";
            if (i == 5) cout << res[4] << " " << res[5] << " " << res[2] << " " << res[3] << " " << res[0] << " " << res[1] << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}