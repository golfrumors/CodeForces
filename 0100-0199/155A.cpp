#include <iostream>

using namespace std;

int main()
{
    int n, a, min, max, amazing = 0;
    cin >> n >> a;
    min = a;
    max = a;
    for (int i = 1; i < n; i++)
    {
    	cin >> a;
    	if (a < min)
    	{
    		min = a;
    		amazing++;
    	}
    	if (a > max)
    	{
    		max = a;
    		amazing++;
    	}
    }
	cout << amazing;
}
