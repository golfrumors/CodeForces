#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	
	int l = 0, r = n - 1, max, k = 0, s = 0, d = 0;
	for(int i = 0; i < n; ++i)
		cin >> a[i];

	while(l <= r)
	{
		if(a[l] >= a[r])
		{
			max = a[l];
			l++;
		}
		else
		{
			max = a[r];
			r--;
		}
		if(k % 2 == 0)
			s += max;
		else
			d += max;
	
		k++;
	}
	cout << s << " " << d;
}
