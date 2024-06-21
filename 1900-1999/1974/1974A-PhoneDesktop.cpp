#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;

    while (t--) {
        int x, y; cin >> x >> y;

        int res = 0;

        res += y / 2;

        int z = y / 2;

        for(int i = z; i > 0; i--)
            x -= 7;

        x = max(0, x);

        if (y % 2 == 1) {
            x -= 11;
            res++;
        }

        x = max(0, x);

        res += x / 15;
        x -= 15 * (x / 15);

        if(x > 0)
            res++;

        cout << res << endl;
    }
}
