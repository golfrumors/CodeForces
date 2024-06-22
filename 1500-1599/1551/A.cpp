#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long c1 = floor(n/3);
        long long c2 = c1;
        if(n % 3 == 1)
            c1 += 1;
        else if(n % 3 == 2)
            c2 += 1;

        cout << c1 << " " << c2 << endl;
    }
}
