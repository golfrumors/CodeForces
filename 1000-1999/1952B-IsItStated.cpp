#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
	cin >> s;
	if(s.find("it") != string::npos)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
    }
}
