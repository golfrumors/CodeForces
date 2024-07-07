#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll dp[5010][5010];
ll cntT[5010];
ll n;

void in()
{
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n + 1; j++) {
            dp[i][j] = -1;
        }
    }

    for (int i = 0; i < n; i++) { 
        ll a;
        cin >> a;
        cntT[a]++; 
    }
}

ll solve(ll i, ll asc)
{
    if (asc < 0)
        return -2;
        
    if (!i)
        return asc ? -2 : 0;
    
    if (~dp[i][asc])
        return dp[i][asc];
    
    if (cntT[i])
        dp[i][asc] = solve(i - 1, asc - 1);
    else
        dp[i][asc] = solve(i - 1, asc);
    
    if (solve(i - 1, asc) != -2 && solve(i - 1, asc) + cntT[i] <= asc)
    {
        if (dp[i][asc] == -2 || solve(i - 1, asc) + cntT[i] < dp[i][asc])
        {
            dp[i][asc] = solve(i - 1, asc) + cntT[i];
        }
    }
    
    return dp[i][asc];
}

int main()
{
    int t; cin >> t;
    while (t--)
    {   
        in();
        
        ll res = n;
        
        for (int i = n; i >= 0; i--)
            if (solve(n, i) != -2) res = i;
            
        cout << res << '\n';
        
        for (int i = 0; i <= n; i++)
            cntT[i] = 0;
    }
    return 0;
}
