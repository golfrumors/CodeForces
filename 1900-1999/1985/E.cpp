#include <bits/stdc++.h>
using namespace std;

vector<long long> divs(long long k) {
    vector<long long> di;
    for (long long i = 1; i * i <= k; ++i) {
        if (k % i == 0) {
            di.push_back(i);
            if (i != k / i) di.push_back(k / i);
        }
    }
    return di;
}

long long cntPla(int x, int y, int z, long long a, long long b, long long c) {
    if (a <= x && b <= y && c <= z)
        return (x - a + 1) * (y - b + 1) * (z - c + 1);
    return 0;
}

long long maxPos(int x, int y, int z, long long k) {
    vector<long long> di = divs(k);
    long long maxP = 0;

    for (int i = 0; i < di.size(); ++i) {
        for (int j = 0; j < di.size(); ++j) {
            long long a = di[i];
            long long b = di[j];
            if (k % (a * b) == 0) {
                long long c = k / (a * b);
                maxP = max(maxP, cntPla(x, y, z, a, b, c));
                maxP = max(maxP, cntPla(x, y, z, a, c, b));
                maxP = max(maxP, cntPla(x, y, z, b, a, c));
                maxP = max(maxP, cntPla(x, y, z, b, c, a));
                maxP = max(maxP, cntPla(x, y, z, c, a, b));
                maxP = max(maxP, cntPla(x, y, z, c, b, a));
            }
        }
    }

    return maxP;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;

        cout << maxPos(x, y, z, k) << "\n";
    }
}
