#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h = 0, i = 0, cnt = 0; cin >> n;
    while(cnt <= n)
    {
        h++;
        cnt += (h*(h+1))/2;
    }
    cout << h - 1;
}
