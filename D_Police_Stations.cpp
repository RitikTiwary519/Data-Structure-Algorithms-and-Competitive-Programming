#include <bits/stdc++.h>
using namespace std;

#define Arise ios_base::sync_with_stdio(0);
#define with cin.tie(0);
#define Vraj cout.tie(0);


typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

#define int ll

#define pb               push_back
#define ff               first
#define ss               second
#define eb               emplace_back
#define getunique(vzw)     {sort(vzw.begin(), vzw.end()); vzw.erase(unique(vzw.begin(), vzw.end()), vzw.end());}

const int mod = 998244353;
const ll inf = 1e18;
const int N = 2e5+5;




void solve()
{
     int n,k,d;
     cin>>n>>k>>d;
     int a[k+5];
     int vis[n+5]{0};
     queue<pair<pair<int,int>,int>>q;
     for(int i=1;i<=k;i++)
     {
      cin>>a[i];
      
      q.push({{a[i],-1},0});
     }
     vector<int>edges[n+1];
     map<pair<int,int>,int>m;
     int x,y;
     
     for(int i=1;i<n;i++)
     {
      cin>>x>>y;
      edges[x].pb(y);
      edges[y].pb(x);
      m[{x,y}]=i;
      m[{y,x}]=i;
      
     }
     vector<int>ans;
           while(!q.empty())
           {
                int node = q.front().ff.ff;
                int parent = q.front().ff.ss;
                int dis = q.front().ss;
                q.pop();
                if(vis[node])
                continue;
                
                vis[node]=1;
                for(auto it:edges[node])
                {
                   if(it==parent)
                   continue;
                  if(!vis[it])
                  {
                    q.push({{it,node},dis+1});
                  }
                  else if(vis[it])
                  {
                      ans.pb(m[{node,it}]);
                  }
                }
           }
     cout<<ans.size()<<"\n";
     for(auto it:ans)
     cout<<it<<" ";
     cout<<"\n";
} 

signed main() {
Arise with Vraj;


//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
// freopen("Error.txt", "w",stderr);

int t=1;
// cin>>t;
while(t--)
solve();

}