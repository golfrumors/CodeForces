#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for(ll i = 0; i < n; i++)
            cin >> v[i];

        vector<ll> res(n);
        for (ll i = 0; i < n; i++)
            res[i] = (n + 1) - v[i];

        int p = 0;
        for (ll i = 0; i < n; i++)
            if (res[i] == n)
                p = i;


        vector<pair<ll, ll>> ind;
        ind.push_back({n, p});

        for (ll i = 0; i < n; i++)
            if (i % 2 != p %2)
                ind.push_back({res[i], i});

        sort(ind.rbegin(), ind.rend());

        for(ll i = 1; i < (ll)ind.size(); i++)
            res[ind[i].second] = ind[i - 1].first;

        res[ind[0].second] = ind.back().first;

        for (auto i : res)
            cout << i << " ";

        cout << "\n";
    }
}
