#include <iostream>

using namespace std;

int main()
{
    int n, s, count[5] = {0};
    cin >> n;
    while(n--)
    {
        cin >> s;
        count[s]++;
    }

    int tot = count[4] + count[3] + count[2]/2;
    count[1] -= count[3];
    if(count[2] % 2 == 1)
    {
        tot++;
        count[1] -= 2;
    }
    if(count[1] > 0)
    {
        tot += (count[1] + 3) / 4;
    }

    cout << tot;
}
