#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    vector<int> parent(n+1,-1);
    vector<int> dist(n+1,INT_MAX);
    vector<int> vis(n+1,0);
    int src=1;
    q.push(src);
    dist[src]=0;
    vis[src]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                vis[it]=1;
                dist[it]=dist[node]+1;
                parent[it]=node;
                q.push(it);
            }
        }
    }
    int dest=n;
    if(dist[dest]==INT_MAX)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    vector<int> path;
    while(dest!=-1)
    {
        path.push_back(dest);
        dest=parent[dest];
    }
    reverse(path.begin(),path.end());
    cout<<path.size()<<endl;
    for(auto it:path)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return;
}

int main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}
