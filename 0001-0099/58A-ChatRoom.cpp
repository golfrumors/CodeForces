#include <iostream>

using namespace std;

int main()
{
    string s, tar = "hello";
    int i = 0, j = 0;
    cin >> s;

    for(; j < s.length(); j++)
    {
        if(s[j] == tar[i])
            i++;
    }

    if(i == tar.length())
        cout << "YES";
    else
        cout << "NO";
}
