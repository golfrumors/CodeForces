#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, m; cin >> n >> m;
        long long l = max(0LL, n - m), r = n + m, res = 0;
        for(int i = 31; ~i; --i)
            if((l & (1LL << i)) || (r & (1LL << i)) || (l >> (i + 1)) != (r >> (i + 1)))
                res |= (1LL << i);

        cout << res << endl;
    }
}
