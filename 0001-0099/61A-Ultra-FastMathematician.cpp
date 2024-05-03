#include <iostream>
#include <string>

using namespace std;

int main()
{
    string f, s, res = "";
    getline(cin, f);
    getline(cin, s);

    for(int i = 0; i < f.length(); i++)
    {
        char xor_res = (f[i] ^ s[i]) + '0';
        res += xor_res;
    }
    cout << res;

}
