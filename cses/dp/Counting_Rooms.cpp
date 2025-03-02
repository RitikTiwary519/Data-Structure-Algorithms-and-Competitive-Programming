// #include <bits/stdc++.h>
// #define ll long long
// #define mp make_pair
// #define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define srt sort(v.begin(), v.end());
// using namespace std;
// #include <iostream>
// #include <cstring>
// using namespace std;

// void dfs(int i, int j, char** graph, int** vis, int n, int m) {
//     // Base cases for out-of-bounds or already visited
//     if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || graph[i][j] == '#') {
//         return;
//     }

//     // Mark the current cell as visited
//     vis[i][j] = 1;

//     // Explore neighbors (up, down, left, right)
//     dfs(i + 1, j, graph, vis, n, m);
//     dfs(i - 1, j, graph, vis, n, m);
//     dfs(i, j + 1, graph, vis, n, m);
//     dfs(i, j - 1, graph, vis, n, m);
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     // Dynamically allocate memory for the graph and visited arrays
//     char** graph = new char*[n];
//     int** vis = new int*[n];
//     for (int i = 0; i < n; i++) {
//         graph[i] = new char[m];
//         vis[i] = new int[m];
//     }

//     // Input the graph
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> graph[i][j];
//         }
//     }

//     // Initialize the visited array
//     for (int i = 0; i < n; i++) {
//         memset(vis[i], 0, sizeof(int) * m);
//     }
//     int count=0;
//     // Perform DFS on all unvisited cells
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (!vis[i][j] && graph[i][j] == '.') { // Example condition
//                 dfs(i, j, graph, vis, n, m);
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;

//     // Free dynamically allocated memory
//     for (int i = 0; i < n; i++) {
//         delete[] graph[i];
//         delete[] vis[i];
//     }
//     delete[] graph;
//     delete[] vis;

//     return 0;
// }




#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define ritik_tiwary ios_base::sync_with_stdio(false);cin.tie(NULL);
#define srt sort(v.begin(), v.end());
using namespace std;

void bfs(int i, int j, vector<vector<char>>& graph, vector<vector<int>>& vis, int n, int m) {
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = 1;
    
    // Directions for movement: up, down, left, right
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && !vis[nx][ny] && graph[nx][ny] == '.') {
                vis[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> graph(n, vector<char>(m));
    vector<vector<int>> vis(n, vector<int>(m, 0));

    // Input the graph
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }

    int count = 0;
    // Perform BFS on all unvisited cells
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && graph[i][j] == '.') { // Example condition
                bfs(i, j, graph, vis, n, m);
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}