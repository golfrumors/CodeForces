#include <bits/stdc++.h>

using namespace std;

bool solve(const string& s)
{
    string d = "";
    string l = "";
    bool dFound = false;

    for(char c : s)
    {
        if(isdigit(c)){
            if(!l.empty()){
                return false;
            }
            d += c;
        } else {
            l += c;
            dFound = true;
        }
    }

    if(!is_sorted(d.begin(), d.end()) || !is_sorted(l.begin(), l.end()))
        return false;

    return true;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string p; cin >> p;
        cout << (solve(p) ? "YES\n" : "NO\n");
    }
}
