#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mWins = 0, cWins = 0; cin >> n;
    vector<int> m(n), c(n);

    for(int i = 0; i < n; i++)
        cin >> m[i] >> c[i];

    for(int i = 0; i < n; i++)
    {
        if(m[i] > c[i])
            mWins++;
        if(c[i] > m[i])
            cWins++;
    }

    if(mWins > cWins)
        cout << "Mishka";
    else if(cWins > mWins)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

}
