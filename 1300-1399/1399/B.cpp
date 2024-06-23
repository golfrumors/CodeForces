#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, cnt = 0; cin >> n;
        vector<long long> a(n), b(n);

        for(int i = 0; i < n; ++i)
            cin >> a[i];

        for(int i = 0; i < n; ++i)
            cin >> b[i];

        for(int i = 0; i < n; ++i)
        {
            cnt += max((a[i] - *min_element(a.begin(), a.end())), (b[i] - *min_element(b.begin(), b.end())));
        }

        cout << cnt << endl;
    }
}
