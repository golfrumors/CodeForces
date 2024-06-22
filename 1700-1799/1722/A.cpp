#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        if(n != 5) {
            cout << "NO\n";
        }
        else {
            sort(s.begin(), s.end());
            if(s == "Timru")
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
