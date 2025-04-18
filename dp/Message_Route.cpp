#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)
#include<bits/stdc++.h>
using namespace std;

int dfs(int parent, vector<int> &vis, vector<vector<int>> &adj,vector<int> &pathTracker,int n)
{
    vis[parent] = 1;
    if (parent == n)
    {
        return 0;
    }

    int mini = INT_MAX;

    for (auto child : adj[parent])
    {
        if (vis[child] == 0)
        {
            int res = dfs(child, vis, adj,pathTracker,n);
            if (res != INT_MAX)
            {
                if(mini>1+res)
                {
                    pathTracker.push_back(child);
                    mini = min(mini, 1 + res);
                }
            }
        }
    }
    return mini;
}



void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)  
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> vis(n + 1, 0); 
    vector<int> pathTracker;
    
    int ans = dfs(1, vis, adj,pathTracker,n);
    if (ans == INT_MAX)
    cout << "IMPOSSIBLE" << endl;
    else
    {
        pathTracker.push_back(1);
        cout<<pathTracker.size()<<endl;
        reverse(pathTracker.begin(),pathTracker.end());
        for (int i = 0; i < pathTracker.size(); i++)
        {
            cout<<pathTracker[i]<<" ";
        }
        cout<<endl;
        
    }
}

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
}
