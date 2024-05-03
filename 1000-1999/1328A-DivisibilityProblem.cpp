#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    cin >> t;
    while(t--)
    {
        int div = 0, rem = 0;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
            continue;
        }

        div = a/b;
        rem = (div + 1) * b;
        cout << rem - a << endl;

    }
}
