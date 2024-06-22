#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        int r; cin >> r;
        string s = "Division ";

        if(r <= 1399)
            cout << s << 4 << endl;
        else if(r <= 1599)
            cout << s << 3 << endl;
        else if(r <= 1899)
            cout << s << 2 << endl;
        else if(1900 <= r)
            cout << s << 1 << endl;
    }

}
