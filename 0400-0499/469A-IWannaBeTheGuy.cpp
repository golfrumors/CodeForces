#include <iostream>
#include <set>

using namespace std;

int main()
{
     int n, p, q;
     set<int> levs;
     cin >> n;

     cin >> p;
     for(int i = 0; i < p; i++)
     {
         int tmp;
         cin >> tmp;
         levs.insert(tmp);
     }

     cin >> q;
     for(int i = 0; i < q; i++)
     {
         int tmp;
         cin >> tmp;
         levs.insert(tmp);
     }

     levs.size() == n ? cout << "I become the guy." : cout <<  "Oh, my keyboard!";

}
