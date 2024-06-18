#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    map<string, int> s;
    string t;

    for(int i = 0; i < n; ++i)
    {
	cin >> t;
	s[t]++;
    }

    string w;
    int m = 0;

    for(auto& p : s)
    {
	if(p.second > m)
	{
	    m = p.second;
	    w = p.first;
	}
    }

    cout << w;

}
