#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    
    while (t--) {
        int n; cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
            ans = min(ans, max(a[i], a[i + 1]));
        
        cout << ans - 1 << "\n";
    }
}

