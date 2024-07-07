#include <bits/stdc++.h>

using namespace std;

bool solve(const vector<int>& a)
{
    int n = a.size();
    vector<int> b = a;
    sort(b.begin(), b.end());
    if(a == b)
        return true;

    for(int i = 0; i < n; ++i)
    {
        rotate(b.begin(), b.begin() + 1, b.end());
        if(b == a)
            return true;
    }

    return false;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i : a) cin >> i;

        cout << (solve(a) ? "YES\n" : "NO\n"); 
    }
}
