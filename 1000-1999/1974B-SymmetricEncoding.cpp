#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string encoded, decoded;
        cin >> encoded;

        string r = encoded;
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());

        map<char, char> symmetryMap;
        for (int i = 0; i < r.size(); i++)
        {
            symmetryMap[r[i]] = r[r.size() - 1 - i];
        }

        for (char c : encoded)
        {
            decoded += symmetryMap[c];
        }

        cout << decoded << endl;
    }

    return 0;
}
