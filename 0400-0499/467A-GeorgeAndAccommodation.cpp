#include <iostream>

using namespace std;

int main()
{
    int n;
    int runningTotal = 0;
    cin >> n;
    while(n--)
    {
	int p, q;
	cin >> p >> q;
	if((q - p) != 0 && (q - p) >= 2)
	    runningTotal++;
    }

    cout << runningTotal;
}
