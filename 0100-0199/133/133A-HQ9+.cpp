#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.find("H") != string::npos || s.find("Q") != string::npos || s.find("9") != string::npos)
        cout << "YES";
    else
        cout << "NO";
}
