#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, f, k; cin >> n >> f >> k;
		vector<int> a(n);
		for(int i = 0; i < n; ++i)
			cin >> a[i];

		int fav = a[f - 1];
		sort(a.begin(), a.end(), greater<int>());

		int pos = find(a.begin(), a.end(), fav) - a.begin();
		int last = find(a.rbegin(), a.rend(), fav).base() - a.begin() - 1;
		if(last < k)
			cout << "YES\n";
		else if(pos >= k)
			cout << "NO\n";
		else
			cout << "MAYBE\n";
	}
}
