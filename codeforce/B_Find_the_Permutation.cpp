#include <bits/stdc++.h>
#define ll long long
#define int ll
#define rsrt sort(v.rbegin(), v.rend());
#define input                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
#define deb(v)            \
    for (auto &i : v)     \
    {                     \
        cout << i << ' '; \
    }
#define arrinput               \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;
#define forn(a, b, c) for (int(a) = (b); (a) < (c); (a)++)
#define ford(a, b, c) for (int(a) = (b); (a) > (c); (a)--)

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<vector<int>> adj(n + 1); 
        vector<int> in_degree(n + 1, 0); 

        for (int i = 1; i <= n; ++i) {
            string row;
            cin >> row;
            for (int j = i + 1; j <= n; ++j) { 
                if (row[j - 1] == '1') {
                    adj[i].push_back(j); 
                    in_degree[j]++;      
                } else {
                    adj[j].push_back(i); 
                    in_degree[i]++;    
                }
            }
        }

        queue<int> q;
        for (int i = 1; i <= n; ++i) {
            if (in_degree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> permutation;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            permutation.push_back(u);

            for (int v : adj[u]) {
                in_degree[v]--;
                if (in_degree[v] == 0) {
                    q.push(v);
                }
            }
        }

        for (int x : permutation) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
