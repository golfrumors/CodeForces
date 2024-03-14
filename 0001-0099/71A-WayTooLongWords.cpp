#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int n;
   string s;
   vector<string> v;

   cin >> n;
  
   while (n--)
   {
	cin >> s;
	if (s.length() > 10)
	{
	    v.push_back(s[0] + to_string(s.length() - 2) + s[s.length() - 1] + "\n");
	}
	else
	{
	    v.push_back(s + "\n");
	}
   }
   
   for (string s : v)
       cout << s;

}
