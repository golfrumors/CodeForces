#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t; cin >> n >> t;
    vector<int> a(n-1);

    for(int i = 0; i < n - 1; i++)
	cin >> a[i];

    int curr = 1;
    while(curr < t)
	curr += a[curr - 1];

    if(curr == t)
	cout << "YES";
    else
	cout << "NO";
}
