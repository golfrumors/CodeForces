#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<ll, ll> pi;
typedef pair<ll, pi> ppi;

#define FOR(i,l,r) for(ll i = l; i < r; i++)
#define REP(i,n) FOR(i,0,n)
#define sz(c) ((ll)(c).size())

template<typename T>ostream&operator<<(ostream&os,vector<T>v) {REP(i,sz(v))os<<v[i]<<(i+1!=sz(v)?" ":""); return os;}
template<typename T>istream&operator>>(istream&is,vector<T>&v){for(T&in:v)is>>in;return is;}
template<class T>bool chmax(T&a, T b){if (a<b) {a=b; return 1;} return 0;}
template<class T>bool chmin(T&a, T b){if (b<a) {a=b; return 1;} return 0;}

