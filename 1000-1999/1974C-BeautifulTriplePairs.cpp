#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define int long long

signed main()
{
    int t; cin >> t;

    while(t--)
    {
        int n, res = 0; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < a.size(); i++)
            cin >> a[i];

        map<pair<int, int>, int> ab;
        map<pair<int, int>, int> bc;
        map<pair<int, int>, int> ac;
        map<vector<int>,int> ab3;
        map<vector<int>,int> bc3;
        map<vector<int>,int> ac3;

        for(int i = 0; i < n - 2; i++)
        {
            int x = a[i];
            int y = a[i + 1];
            int z = a[i + 2];

            ab[{x, y}]++;
            bc[{y, z}]++;
            ac[{x, z}]++;

            vector<int> xyz = {x, y, z};
            ab3[xyz]++;
            bc3[xyz]++;
            ac3[xyz]++;

            res += ab[{x, y}] - ab3[xyz];
            res += bc[{y, z}] - bc3[xyz];
            res += ac[{x, z}] - ac3[xyz];

        }

        cout << res << endl;
    }
}
