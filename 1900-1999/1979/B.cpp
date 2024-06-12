#include <iostream>
#include <vector>
using namespace std;

int cntTrail(int n) {
    if (n == 0) return 32;
    int cnt = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        cnt++;
    }
    return cnt;
}

int subSeg(int x, int y) {
    int xorR = x ^ y;
    int trail = cntTrail(xorR);
    return 1 << trail;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    
    while (t--) {
        int x, y; cin >> x >> y;
        cout << subSeg(x, y) << "\n";
    }
}

