#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   string s1, s2, s3, full; cin>>s1>>s2>>s3;

   full = s1 + s2;

   if(is_permutation(s3.begin(), s3.end(), full.begin()))
       cout << "YES";
   else
       cout << "NO";

}
