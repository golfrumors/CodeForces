#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, cnt = 0; cin >> x;

    while(x > 0)
    {
	cnt += x % 2;
	x /= 2;
    }

    cout << cnt;
}
