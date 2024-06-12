#include <iostream>
#include <math.h>

using namespace std;

#define int long long

signed main()
{
    int t, res = 0; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	if(n%2==0){
	res = ceil((n/2) - 1);
	cout << res << "\n";
	}
	else{
	    res = ceil(n/2);
	    cout << res << "\n";
	}
    }
}
