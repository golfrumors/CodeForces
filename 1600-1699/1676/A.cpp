#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string v; cin >> v;

        if((v[0] + v[1] + v[2]) == (v[3] + v[4] + v[5]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
