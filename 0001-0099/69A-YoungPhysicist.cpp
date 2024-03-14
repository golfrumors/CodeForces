#include <iostream>

using namespace std;

int main()
{
    int n, x, y, z, sumX = 0, sumY = 0, sumZ = 0;
    cin >> n;
    
    while(n--)
    {
    	cin >> x >> y >> z;
    	sumX += x;
    	sumY += y;
    	sumZ += z;
    }

    (sumX != 0 || sumY != 0 || sumZ != 0) ? cout << "NO" : cout << "YES";
}
