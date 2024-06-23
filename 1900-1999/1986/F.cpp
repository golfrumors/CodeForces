#include<bits/stdc++.h>
using namespace std;
#define int long long
map<pair<int,int>,int> M;
int ifV;

pair<int,int> find(int ind,vector<vector<int>> &adjacency,vector<int> &H,int par){
  
  if(H[ind]!=-1)
    return {H[ind],0};
  
  ifV++;
  H[ind] = ifV;
  
  int res = H[ind], sum = 1;
  
  for(auto &val:adjacency[ind]){
    if(val==par) continue;
    pair<int,int> adjPair = find(val,adjacency,H,ind);
    int x = adjPair.first,y = adjPair.second;
    
    sum+=y;
    
    if(x<=H[ind]){
      res = min(res,x);
    }
    else{
      M[{ind,val}] = y; 
    }
  }
  
  H[ind] = res;
  return {res,sum};
}

void solve()
{
  int n,m; cin >> n >> m;
  
  vector<vector<int>> adjacency(n);
  
  while(m--){
    int u,v; cin >> u >> v;
    u--;
    v--;
    adjacency[u].push_back(v);
    adjacency[v].push_back(u);
  }
  M.clear();
  ifV = 0;
  vector<int> H(n,-1);
  pair<int,int> adjPair = find(0,adjacency,H,-1);
  

  int res = n*(n-1)/2;
  for(auto &val:M){
    int l = val.second,r = n - val.second;
    res = min(res, (l*(l-1) + (r*(r-1)))/2);
  }
  
  cout << res << endl;
}

signed main() 
{
    int t; cin >> t;
    while(t--)
      solve();

    return 0;
}
