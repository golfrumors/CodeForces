#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>& perm1, vector<int>& perm2) {
    unordered_map<int, int> idxM;
    int size = perm1.size();
    int swp = 0;

    for (int i = 0; i < size; ++i) idxM[perm2[i]] = i;

    for (int i = 0; i < size; ++i) {
        if (perm1[i] != perm2[i]) {
            ++swp;
            int swap_with_index = idxM[perm1[i]];
            swap(perm2[i], perm2[swap_with_index]);
            idxM[perm2[swap_with_index]] = swap_with_index;
            idxM[perm1[i]] = i;
        }
    }

    return swp % 2 == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
            
        vector<int> sA = a;
        vector<int> sB = b;

        sort(sA.begin(), sA.end());
        sort(sB.begin(), sB.end());

        if (sA != sB) {
            cout << "NO\n";
        } else {
            if (solve(a, b)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
