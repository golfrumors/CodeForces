#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long a, b; cin >> a >> b;
		long long diff = abs(a - b);

		if(diff == 0)
			cout << 0 << endl;
		else
		{
			int min = (diff + 9) / 10;
			cout << min << endl;
		}
	}
}
