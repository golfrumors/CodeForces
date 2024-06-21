#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main()
{
	int n, t;
	vi v1, v2, v3;
	cin >> n;

	for(int i = 1; i <= n; ++i)
	{
		cin >> t;
		if(t == 1)
			v1.push_back(i);
		else if (t == 2)
			v2.push_back(i);
		else
			v3.push_back(i);
	}

	int minS = min(min(v1.size(), v2.size()), v3.size());

	cout << minS << endl;

	for(int i = 0; i < minS; ++i)
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;

}
