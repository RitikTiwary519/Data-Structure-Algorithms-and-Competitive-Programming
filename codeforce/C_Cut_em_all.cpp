#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

void dfs(int node, vector<int> &vis, vector<int> &cuts, vector<int> adj[], int &ans)
{
    vis[node] = 1;
    cuts[node] = 1;  // count itself

    for (auto child : adj[node])
    {
        if (!vis[child])
        {
            dfs(child, vis, cuts, adj, ans);
            cuts[node] += cuts[child];

            if (cuts[child] % 2 == 0)
                ans++;
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    if(n % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> adj[n+1];
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> cuts(n+1, 0);
    vector<int> vis(n+1, 0);
    int ans = 0;

    dfs(1, vis, cuts, adj, ans);

    cout << ans << endl;
}

signed main()
{
    solve();
}
