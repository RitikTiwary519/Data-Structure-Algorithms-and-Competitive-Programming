// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // #define rsrt sort(v.rbegin(), v.rend());
// // #define mp make_pair
// // #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// // #define srt sort(v.begin(), v.end());
// // #define yes cout << "YES" << endl;
// // #define no cout << "NO" << endl;
// // #define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
// // #define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

// // vector<vector<int>> adj;
// // vector<int> height;
// // int maxi = 0 ;

// // void dfs(int src,int par)
// // {
// //     if(adj[src].size()==1 && par==adj[src][0])
// //     {
// //         height[src]=1;
// //         return ;
// //     }

// //     for(auto node : adj[src])
// //     {
// //         dfs(node,src);
// //         height[src]=max(height[src],height[node]+1);
// //     }

// // }

// // void dfs2(int src,int par)
// // {
// //     if(adj[src].size()==1 && par==adj[src][0])
// //     {
// //         maxi=max(maxi,1);
// //         return ;
// //     }

// //     priority_queue<int> q;

// //     for(auto node : adj[src])
// //     {
// //         dfs2(node,src);
// //         q.push(height[node]);
// //     }

// //     int i=0;
// //     int sum=0;
// //     while(i<2 && !q.empty())
// //     {
// //         sum+=q.top();
// //         q.pop();
// //         i++;
// //     }
// //     maxi= max(maxi,sum);
// // }


// // void solve()
// // {
// //     int n;
// //     cin>>n;
// //     height.assign(n,0);
// //     adj.assign(n,vector<int>());
// //     for (int i = 0; i < n-1; i++)
// //     {
// //         int u,v;
// //         cin >> u >> v;
// //         u--, v--;
// //         adj[u].push_back(v);
// //         adj[v].push_back(u);
// //     }

// //     dfs(0,-1);
// //     dfs2(0,-1);
// //     cout<<maxi<<endl;  
// // }

// // int main()
// // {
// //     solve();
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);

// vector<vector<int>> adj;
// vector<int> height;
// int maxi = 0;

// void dfs(int src, int par) {
//     if(adj[src].size()==1 && par==adj[src][0])
//     {
//         height[src]=1;
//         return ;
//     }
//     for (auto node : adj[src]) {
//         if (node == par) continue;
//         dfs(node, src);
//         height[src] = max(height[src], height[node] + 1);
//     }
// }

// void dfs2(int src, int par) {
//     priority_queue<int> q;

//     for (auto node : adj[src]) {
//         if (node == par) continue;
//         q.push(height[node]);
//         dfs2(node, src);
//     }

//     int sum = 0, count = 0;
//     while (!q.empty() && count < 2) {
//         sum += q.top();
//         q.pop();
//         count++;
//     }

//     maxi = max(maxi, sum);
// }

// void solve() {
//     int n;
//     cin >> n;
//     adj.assign(n, vector<int>());
//     height.assign(n, 0);

//     for (int i = 0; i < n - 1; i++) {
//         int u, v;
//         cin >> u >> v;
//         u--, v--;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     dfs(0, -1);
//     for(auto h : height)
//     {
//         cout<<h<<endl;
//     }
//     dfs2(0, -1);

//     cout << maxi << endl;
// }

// int main() {
//     ritik_tiwary
//     solve();
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<vector<int>> adj;
pair<int, int> farthestNode; // {distance, node}

void dfs(int src, int par, int dist) {
    farthestNode = max(farthestNode, {dist, src});
    for (auto node : adj[src]) {
        if (node == par) continue;
        dfs(node, src, dist + 1);
    }
}

void solve() {
    int n;
    cin >> n;
    adj.assign(n, vector<int>());

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // First DFS to find the farthest node from any starting node (we use 0)
    farthestNode = {-1, -1};
    dfs(0, -1, 0);
    int u = farthestNode.second;

    // Second DFS to find the farthest node from u
    farthestNode = {-1, -1};
    dfs(u, -1, 0);
    int diameter = farthestNode.first;

    cout << diameter << endl;
}

int main() {
    ritik_tiwary
    solve();
    return 0;
}