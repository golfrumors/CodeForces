#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int m = *max_element(a.begin(), a.end());
    int s = 0;
    for(int i = 0; i < n; i++)
        s += (m - a[i]);

    cout << s;
}
