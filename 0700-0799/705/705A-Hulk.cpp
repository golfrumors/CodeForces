#include <iostream>

using namespace std;

int main()
{
    int n;
    string res = "I hate";
    cin >> n;
    if(n != 1)
        res = "";
    for(int i = 0; i < n; i++)
    {
        if(n == 1)
            break;
        if(i % 2 != 0)
        {
            res += "I love";
        }
        else if (i % 2 == 0) {
            res += "I hate";
        }

        if(i != n-1)
            res += " that ";
    }

    cout << (res + " it");
}
