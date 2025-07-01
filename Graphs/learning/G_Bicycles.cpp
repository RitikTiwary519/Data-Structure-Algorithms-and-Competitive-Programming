#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = (ll)1e18;

struct Edge {
    int to;
    int w;
};

struct State {
    ll time;
    int city;
    int bike;  // bike index = city where it was bought
    bool operator<(State const& o) const {
        return time > o.time;  // min-heap
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--){
        int n, m;
        cin >> n >> m;

        vector<vector<Edge>> adj(n+1);
        for(int i = 0; i < m; i++){
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<int> s(n+1);
        for(int i = 1; i <= n; i++){
            cin >> s[i];
        }

        // dist[u][b] = best time to reach u while riding bike b
        // we'll store per-city maps instead of a big 2D array
        vector<unordered_map<int,ll>> dist(n+1);

        priority_queue<State> pq;
        // start by buying bike 1 at city 1, time = 0
        dist[1][1] = 0;
        pq.push({0, 1, 1});

        ll answer = INF;
        while(!pq.empty()){
            auto cur = pq.top(); 
            pq.pop();

            ll t = cur.time;
            int u = cur.city;
            int b = cur.bike;

            // stale state?
            if (dist[u].count(b) == 0 || t > dist[u][b]) 
                continue;

            // first time we pop city n is the best
            if (u == n){
                answer = t;
                break;
            }

            // 1) ride to neighbors with the current bike b
            for (auto &e : adj[u]){
                int v = e.to;
                ll nt = t + (ll)e.w * s[b];
                auto it = dist[v].find(b);
                if (it == dist[v].end() || nt < it->second){
                    dist[v][b] = nt;
                    pq.push({nt, v, b});
                }
            }

            // 2) switch to the bike sold at u (bike = u) if not already on it
            if (b != u){
                auto it2 = dist[u].find(u);
                if (it2 == dist[u].end() || t < it2->second){
                    dist[u][u] = t;
                    pq.push({t, u, u});
                }
            }
        }

        cout << answer << "\n";
    }
    return 0;
}
