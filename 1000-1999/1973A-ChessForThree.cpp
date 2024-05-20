#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> l = {a, b, c};
        sort(l.begin(), l.end());

        if(accumulate(l.begin(), l.end(), 0) % 2)
            cout << -1 << endl;
        else
            cout << min(accumulate(l.begin(), l.end(), 0) / 2, a + b) << endl;
    }

}
