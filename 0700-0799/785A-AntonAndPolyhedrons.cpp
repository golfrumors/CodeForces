#include <iostream>

using namespace std;

int main()
{
    int n, res = 0;
    cin >> n;

    string s;

    while(n--)
    {
        cin >> s;
        int first = s[0] - 'A';

        if(first == 19)
            res += 4;
        else if(first == 2)
            res += 6;
        else if(first == 14)
            res += 8;
        else if(first == 3)
            res += 12;
        else if(first == 8)
            res += 20;
    }
    cout << res;
}
