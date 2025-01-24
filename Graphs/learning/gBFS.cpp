#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int v,vector<int> adj[])
{
    vector<int> bfs;
    bfs.push_back(0);
    vector<int> vis(1000,0);
    vis[0]=1;
    queue<int> q;
    q.push(0);
    
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        for(auto child : adj[top])
        {
            if(vis[child]!=1)
            {
                vis[child]=1;
                q.push(child);
                bfs.push_back(child);
            }
        }

    }
    return bfs;

}

int main()
{
int n,m;
cin>>n>>m;
vector<int> arr[100];
for(int i=1;i<=m;i++)
{
    int x,y;
    cin>>x>>y;
    arr[x].push_back(y);
    arr[y].push_back(x);
}
for(auto it: bfsOfGraph(5,arr))
{
    cout<<it<<endl;
}
}