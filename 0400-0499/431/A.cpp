#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(4);
    int ans = 0;
    for(int i = 0; i < 4; i++) cin >> a[i];

    string s; cin >> s;
    for(int i = 0; i < s.length(); i++)
        ans += a[(s[i] - '0') - 1];

    cout << ans;
}
