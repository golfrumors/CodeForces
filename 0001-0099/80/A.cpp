#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int f = 0, cnt = 0;
    for(int p = n + 1; p <= m; p++)
    {
        cnt = 0;
        for(int i = 2; i <= (p/2) + 1; i++)
            if(p % i == 0)
                cnt++;

        if(cnt == 0)
        {
            if(p == m)
            {
                cout << "YES\n";
                f = 1;
                break;
            }
            else {
                cout << "NO\n";
                f = 1;
                break;
            }
        }
    }
    if(!f)
        cout << "NO\n";
}
