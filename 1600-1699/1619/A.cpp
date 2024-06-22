#include <bits/stdc++.h>

using namespace std;

#define FOR(i, n) for(int i = 0; i < int(n); i++)

int main()
{
    int t;
    cin >> t;
    FOR(tt, t) {
        string s;
        cin >> s;
        bool f = true;
        if (s.length() % 2 == 0) {
            FOR(i, s.length() / 2)
                if (s[i] != s[i + s.length() / 2])
                    f = false;
        } else
            f = false;
        cout << (f ? "YES" : "NO") << endl;
    }
}
