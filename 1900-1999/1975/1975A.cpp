#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n; cin >> t;
    while(t--)
    {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i <= n; ++i)
	    cin >> a[i];

	sort(a.begin(), a.end());
    }
}
