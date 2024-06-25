#include <bits/stdc++.h>

using namespace std;

#define int long long

int solve(int x, int y, int k) {
    int m = x % y;
    m = y - m;
    
    if (k < m)
        return x + k;
    
    if (k == m) {
        x += k;
        while (x % y == 0)
            x /= y;
            
        return x;
    }

    while (true) {
        int N = m;
        if (x == 1)
            break;
            
        if (k >= N) {
            k -= N;
            x += N;
            while (x % y == 0)
                x /= y;
                
            m = y - x % y;
        } else {
            x += k;
            k = 0;
            break;
        }
    }
    if (k != 0)
        return k % (y - 1) + 1;

    return x;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        cout << solve(x, y, k) << endl;
    }

    return 0;
}
