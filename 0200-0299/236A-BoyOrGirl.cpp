#include <iostream>
#include <set>

using namespace std;

int main()
{
   string s;
   cin >> s;
   set<char> i(s.begin(), s.end());
   (i.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!"; 
}
