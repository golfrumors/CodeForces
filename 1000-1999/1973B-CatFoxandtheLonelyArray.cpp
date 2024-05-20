#include <iostream>

using namespace std;

#define ll long long

int st[100001][20];

void buildAns(ll arr[], ll N)
{
    for (ll i = 0; i < N; i++)
        st[i][0] = arr[i];

    for (ll j = 1; j <= 20; j++)
        for (ll i = 0; i + (1 << j) <= N; i++)
            st[i][j] = st[i][j - 1] | st[i + (1 << (j - 1))][j - 1];
}

int query(ll L, ll R)
{

    ll sum=0;
    for (ll j = 20; j >= 0; j--)
    {
        if ((1 << j) <= R - L + 1)
        {
            sum |= st[L][j];

            L += 1 << j;
        }
    }
    return sum;
}

int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;

        cin >> n;

        ll arr[n];
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        buildAns(arr,n);

        ll l = 1, r = n;
        ll ans = n;

        while(l <= r) {
            ll mid = l+(r-l)/2;
            ll val = 0;
            for(ll i = 0; i < mid; i++)
                val |= arr[i];

            bool flag = true;
            for(ll i = 1; i < n; i++) {
                ll leftl = i;
                ll rr = i + mid - 1;
                if(rr <= n -1) {
                    int currval=query(leftl,rr);
                    if(currval!=val) {
                        flag=false;
                        break;
                    }
                }
            }

            if(flag) {
                ans = min(ans,mid);
                r = mid - 1;
            }
            else
                l=mid+1;
        }
        cout << ans << endl;
    }
}
