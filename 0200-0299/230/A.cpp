#include <bits/stdc++.h>

using namespace std;

int main() {
    int str, n; cin >> str >> n;
    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; ++i)
        cin >> dragons[i].first >> dragons[i].second;

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; ++i) {
        if (str > dragons[i].first)
            str += dragons[i].second;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}

