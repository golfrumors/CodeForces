#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mx; cin >> n;
    vector<int> a(n);
    int frequency[100000], dp[100000];

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        frequency[a[i]]++;
        mx = max(mx, a[i]);
    }

    dp[1] = frequency[1];

    for(int i = 2; i <= mx; i++)
        dp[i] = max((dp[i - 2] + (frequency[i] * i)), dp[i - 1]);

    cout << dp[mx];
}
