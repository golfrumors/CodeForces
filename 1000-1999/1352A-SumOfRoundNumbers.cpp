#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int n, count = 0;
	cin >> n;
	int temp = n;
	while(temp)
	{
	    if(temp % 10 != 0)
		count++;
	    temp /= 10;
	}
	cout << count << endl;
	temp = n;
	int i = 0;
	while(temp)
	{
		if(temp % 10 != 0)
			cout << (temp % 10) * pow(10, i) << " ";
		temp /= 10;
		i++;
	}
	cout << endl;
}
}

