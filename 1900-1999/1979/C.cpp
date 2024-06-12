#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> k(n);
        for (int i = 0; i < n; ++i)
            cin >> k[i];
        
        long long l = 1;
        for (int i = 0; i < n; ++i)
            l = lcm(l, k[i]);
        
        vector<long long> A(n);
        long long sumA = 0;
        for (int i = 0; i < n; ++i) {
            A[i] = l / k[i];
            sumA += A[i];
        }
        
        if (sumA >= l) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                cout << A[i] << " ";
            }
            cout << endl;
        }
    }
    
}

