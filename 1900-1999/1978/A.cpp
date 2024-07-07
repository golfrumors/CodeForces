#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int res = 0;
        for(int i = 0; i < n - 1; ++i)
        {
            int p = a[i] + a[n - 1];
            res = max(res, p);
        }
        cout << res << endl;
    }
}
