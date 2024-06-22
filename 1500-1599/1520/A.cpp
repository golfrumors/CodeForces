#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
}

void solve()
{
        int n; cin >> n;
        string s; cin >> s;
        for(char c = 'A'; c <= 'Z'; c++)
        {
            int f = n;
            int l = -1;
            for(int i = 0; i < n; i++)
            {
                if(s[i] == c)
                {
                    f = min(f, i);
                    l = max(l, i);
                }
            }

            for(int i = f; i <= l; i++)
            {
                if(s[i] != c)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
        cout << "YES\n";
}
