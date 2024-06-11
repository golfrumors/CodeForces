#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a[55]; cin >> t;
    while(t--)
    {
        cin >> n;

        for(int i = 0; i < n; ++i)
            cin >> a[i];

        if(n == 1)
        {
            cout << "YES\n";
            continue;
        }

        sort(a, a+n);
        vector<int> ans;
        int res = 0;
        for(int i = 1; i < n; ++i)
        {
            res = abs(a[i] - a[i-1]);
            ans.push_back(res);
        }

        sort(ans.begin(), ans.end(), greater<int>());

        if(ans[0] > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}