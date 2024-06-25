#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    
    int q;
    cin >> q;
    vector<pair<int, int>> queries(q);
    for (auto &p : queries) cin >> p.first >> p.second;

    auto find_min_subarray = [&]() {
        int l = -1, r = -1;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) {
                l = i;
                break;
            }
        }
        if (l == -1) return make_pair(-1, -1);
        for (int i = n - 1; i > 0; --i) {
            if (a[i] < a[i - 1]) {
                r = i;
                break;
            }
        }
        int min_val = *min_element(a.begin() + l, a.begin() + r + 1);
        int max_val = *max_element(a.begin() + l, a.begin() + r + 1);
        while (l > 0 && a[l - 1] > min_val) --l;
        while (r < n - 1 && a[r + 1] < max_val) ++r;
        return make_pair(l + 1, r + 1);
    };

    auto result = find_min_subarray();
    cout << result.first << " " << result.second << endl;

    for (auto [pos, val] : queries) {
        a[pos - 1] = val;
        result = find_min_subarray();
        cout << result.first << " " << result.second << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
