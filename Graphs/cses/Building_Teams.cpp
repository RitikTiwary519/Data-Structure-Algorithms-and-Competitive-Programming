#include <bits/stdc++.h>
using namespace std;

int t=0;

void dfs(int node,vector<int> adj[],vector<int> &col,int color)
{
    col[node]=color;

    for (auto child: adj[node])
    {
        if(col[child]==-1)
        { 
            dfs(child,adj,col,1-color);
        }
        if(col[child]==color)
        {
            t=1;
            return;
        }
    }
    return;
    
}
int main()
{
    int k=1;

    while (k--)
    {
        int n,m;
        cin>>n>>m;

        vector<int> adj[n+1];
        vector<int> col(n+1,-1);

        for (int i = 0; i < m; i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for (int i = 1; i <= n; i++)
        {
            if(col[i]==-1)
            {
                dfs(i,adj,col,1);
            }
        }
        if(t==1)
        {
            cout<<"IMPOSSIBLE"<<endl;
            break;

        }
        for(int i=1;i<=n;i++)
        {
            cout<<2-col[i]<<" ";
        }
        cout<<endl;
    }
    
    
    


}