#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    if(getline(cin, s)) {
        auto count_l = count_if(s.begin(), s.end(), [](auto a) { return islower(a); });
	auto count_u = count_if(s.begin(), s.end(), [](auto a) { return isupper(a); });
    if (count_l < count_u)
	for(int x = 0; x < s.length(); x++) cout << (char)toupper(s[x]);
    else
	for(int x = 0; x < s.length(); x++) cout << (char)toupper(s[x]);

}
