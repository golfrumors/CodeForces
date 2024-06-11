#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int maxS = 0, bestX = 2;
        for(int i = 2; i <= n; ++i)
        {
            int k = n / i;
            int curr =  i * k * (k + 1) / 2;
            if(curr > maxS)
            {
                maxS = curr;
                bestX = i;
            }
        }
        cout << bestX << endl;
    }
}