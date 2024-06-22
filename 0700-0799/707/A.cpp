#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    int n, m, i, c = 0; cin >> n >> m;

    for(i = 1; i <= (n * m); i++)
    {
        cin >> ch;
        if(ch == 'B' || ch == 'W' || ch == 'G')
            c++;
    }

    if(c == (n * m))
        cout << "#Black&White";
    else
        cout << "#Color";

}
