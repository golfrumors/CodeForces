#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n;
    string in;
    set<char> low;
    cin >> n;

    if(n < 26)
    {
        cin >> in;
        cout << "NO";
    }
    else
    {
        cin >> in;
        for(int i = 0; i < in.length(); i++)
        {
            char ch = tolower(in[i]);
            low.insert(ch);
        }
        if(low.size() == 26)
            cout << "YES";
        else
            cout << "NO";
    }
}
