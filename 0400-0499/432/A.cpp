#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ans = 0; cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        if(5 - a[i] >= k)
            ans++;

    cout << (ans / 3);

}
