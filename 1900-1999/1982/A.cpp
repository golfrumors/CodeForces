#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool comp(ll x1, ll y1, ll x2, ll y2)
{
	ll a = x1 - y1, b = x2 - y2;
	return a != 0 && b != 0 && !((a > 0 && b < 0) || (a < 0 && b > 0));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
    	ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    	cout << (comp(x1, y1, x2, y2) ? "YES\n" : "NO\n");
    }    
    
    return 0; 
}
