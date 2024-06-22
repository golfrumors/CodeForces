#include <bits/stdc++.h>

using namespace std;

int main()
{
    string in, s; cin >> in;

    int l = in.length();
    for(int i = 0; i < l; i++)
    {
        if(in[i] == '.')
            s += '0';

        if(in[i] == '-' && in[i + 1] == '.')
        {
            s += '1';
            ++i;
        }

        if(in[i] == '-' && in[i + 1] == '-')
        {
            s += '2';
            ++i;
        }

    }
    cout << s;
}
