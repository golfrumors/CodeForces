#include <iostream>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
	int x, y;
	cin >> x >> y;
	cout << min(x,y) << " " << max(x,y) << endl; 
    }

}
