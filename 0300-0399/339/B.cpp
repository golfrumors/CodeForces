#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, m; cin >> n >> m;

    int curr = 1;
    long long tot = 0;

    for(int i = 0; i < m; ++i)
    {
	int h; cin >> h;

	if(h >= curr)
	    tot += h - curr;
	else
	    tot += n - (curr - h);

	curr = h;
    }

    cout << tot;

}
