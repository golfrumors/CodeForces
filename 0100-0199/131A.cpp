#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s; cin >> s;
    for(auto& x : s)
	x = tolower(x);

    s[0] = toupper(s[0]);

    cout << s << endl;
}
