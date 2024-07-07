#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t; cin >> t;
	while(t--)
	{
		long long x, y, k; cin >> x >> y >> k;
		while (k > 0 && x != 1) {
			long long red = (x / y + 1) * y - x;
					red = max(1ll, red);
					red = min(red, k);
					x += red;
			while (x % y == 0) {
				x /= y;
			}
			k -= red;
		}
		cout << x + k % (y - 1) << '\n';
	}

	return 0;
}
