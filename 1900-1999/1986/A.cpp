#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, x1, x2, x3; cin >> t;
	while(t--)
	{
		cin >> x1 >> x2 >> x3;
		int z[3] = {x1,x2,x3};
		sort(z, z+3);
		cout << abs(z[0] - z[1]) + abs(z[1] - z[2]) << endl;
	}
}