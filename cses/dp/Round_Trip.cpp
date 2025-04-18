#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];

    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> vis(n+1,0);
    vector<int> parent(n+1,-1);
    queue<int> q;
    vis[1]=1;
    q.push(1);
    
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        vis[node]=1;

        for(auto child : adj[node])
        {
            if(child!=node && vis[child]==1)
            {
                
                break;
            }
        }
    }
     
    
}

int main(int argc, char const *argv[])
{
    int t;
    t=1;
    while (t--)
    {
        solve();
        
    }
    
}
