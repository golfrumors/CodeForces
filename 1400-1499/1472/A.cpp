#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int w, h, n; cin >> w >> h >> n;
        int paper = 1;
        while(w % 2 == 0)
        {
            w /= 2;
            paper *= 2;
        }

        while(h % 2 == 0)
        {
            h /= 2;
            paper *= 2;
        }

        if(paper >= n)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
}
