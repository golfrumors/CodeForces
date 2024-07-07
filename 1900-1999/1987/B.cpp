#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() 
{
    int t; cin >> t;
    while(t--){
		int n; cin >> n;
		vector<int> a(n), b;
		
		for(int i = 0; i < n; ++i)
			cin >> a[i];
			
		int x = a[0];
		for(int i = 0; i < n; ++i)
		{
			x = max(x, a[i]);
			if(x > a[i])
				b.push_back(x - a[i]);
		}
		
		if(b.size() == 0)
		{
			cout << 0 << endl;
			continue;
		}
		
		sort(b.begin(), b.end());
		
		int res = b[b.size() - 1] , y = 0;
		
		for(int i = 0; i < b.size(); ++i)
		{
			res += (b[i] - y) * (b.size() - i);
			y = b[i];
		}
		
		cout << res << endl;     
    }
    return 0;
}