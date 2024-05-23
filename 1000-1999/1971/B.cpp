#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
	string s;
	cin >> s;

	set<char> st(s.begin(), s.end());

	if(st.size() != 1)
	{
	    cout << "YES" << endl;
	    next_permutation(s.begin(), s.end());
	    cout << s << endl;
	}
	else
	    cout << "NO" << endl;

    }
}
