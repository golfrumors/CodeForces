#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
	sum += a[i];
    }
    int half = sum / 2;
    int sum1 = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    	if (sum1 <= half)
	{
    	    sum1 += a[i];
    	    count++;
    	}
    cout << count;
}
