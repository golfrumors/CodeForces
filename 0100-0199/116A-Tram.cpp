#include <iostream>

using namespace std;

int main()
{
    int n, a, b, max = 0, current = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
    	cin >> a >> b;
    	current = current - a + b;
    	if (current > max)
    		max = current;
    }
    cout << max;
}
