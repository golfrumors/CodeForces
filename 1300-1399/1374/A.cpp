#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y, n; cin >> x >> y >> n;
        int maxK = n - (n - y) % x;
        cout << maxK << endl;
    }
}
