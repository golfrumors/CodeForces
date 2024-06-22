#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string b, a; cin >> b;
        for(int i = 0; i < b.length() - 1; i++)
        {
            if(i == 0)
                a += b[i];
            if(b[i] == b[i - 1])
            {
                a += b[i];
                i++;
            }
        }
        a += b[b.length() - 1];
        cout << a << endl;
    }
}
