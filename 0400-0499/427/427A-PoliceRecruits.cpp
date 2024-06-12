#include <iostream>

using namespace std;

int main()
{
    int n, p, c = 0, u = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
	cin >> p;
	if (p > 0)
    	    c += p;
    	else if (c > 0)
    	    c--;
    	else
    	    u++;
    }
    cout << u << endl;
}
