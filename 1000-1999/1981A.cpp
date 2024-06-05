#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	int l, r; cin >> l >> r;
	cout << __lg(r) << endl;
    }
}
