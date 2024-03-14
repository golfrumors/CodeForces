#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;
    string s;
    cin >> n;
    while (n--)
    {
    	cin >> s;
    	if (s[0] == '+' || s[2] == '+')
    		x++;
    	else
    		x--;
    }
    cout << x;
}

