#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        if(min(s1, s2) > max(s3, s4) || max(s1, s2) < min(s3, s4))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
