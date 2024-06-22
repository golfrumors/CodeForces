#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string comp = "codeforces";
        int cnt = 0;

        for(int i = 0; i < s.length(); i++)
            if(s[i] != comp[i])
                cnt++;

        cout << cnt << endl;
    }
}
