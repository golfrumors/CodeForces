#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int& x : a)
            cin >> x;

        sort(a.begin(), a.end());
        int res = a[n - 1] - a[0];
        
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                res = min(res, a[j] - a[i]);

        cout << res << endl;
    }
}
