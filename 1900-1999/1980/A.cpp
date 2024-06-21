#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		string s; cin >> s;
		map<char, int> a;

		for(char c : s)
			a[c]++;

		int need = 0;
		for(int i = 0; i < m; ++i)
		{
			for(char lvl = 'A'; lvl <= 'G'; ++lvl)
			{
				if(a[lvl] > 0)
					a[lvl]--;
				else
					need++;
			}
		}
		cout << need << endl;
	}
}
