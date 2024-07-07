#include <bits/stdc++.h>
#define ll long long
using namespace std;

void res()
{
    ll n, a, b, k, r, ans;
    cin >> n >> a >> b;
    if(a > b)
    {
        cout << n * a << endl;
        return;
    }
    k = min(b - a, n);
    r = b - k;
    ans = (b * b + b) / 2 - (r * r + r) / 2;
    if(k < n)
        ans += a * (n - k);

    cout << ans << endl;
}

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        res();
    }
}
