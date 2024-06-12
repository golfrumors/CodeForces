#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, n, m, b, c, sum, a[200];
    cin >> n;

    for(i = 0, sum = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a+n);

    sum /= 2;

    for(i = n-1, c = 0, b = 0; i >= 0; b++, i--)
    {
        c += a[i];
        if (c > sum)
            break;
    }
    cout << (b + 1);

    return 0;
}
