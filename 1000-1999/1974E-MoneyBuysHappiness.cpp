#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

signed main()
{
    ll t; cin >> t;

    while (t--)
    {
        ll n, x, maxN = 0; cin >> n >> x;
        vector<pair<ll, ll>> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
            maxN+=a[i].second;
        }

        ll dp[n+1][maxN+1];

        for(ll i=0;i<=n;i++)
            for(ll j=0;j<=maxN;j++)
                dp[i][j]=LLONG_MIN;

        dp[1][0]=x;

        if(a[0].first==0)
            dp[1][a[0].second]=x;

        for(ll i=2;i<=n;i++)
            for(ll j=0;j<=maxN;j++)
            {
                dp[i][j]=dp[i-1][j]+x;
                if(j>=a[i-1].second)
                {
                    ll prev_h=j-a[i-1].second;
                    ll prev_l=dp[i-1][prev_h];
                    if(prev_l>=a[i-1].first)
                        dp[i][j]=max(dp[i][j],prev_l-a[i-1].first+x);
                }

            }

        ll res=0;
        for(ll i=maxN;i>=0;i--)
            if(dp[n][i]>=0)
            {
                res=i;
                break;
            }
        cout << res << endl;

    }
}
