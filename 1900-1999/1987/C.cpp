#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve()
{
	int n; cin >> n;
	int res = 0;
	for(int i = 0; i < n; ++i)
	{
		int a; cin >> a;
		res = max(res, a + i);
	}
	
	cout << res << endl;
}

signed main()
{
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
	
	return 0;
}