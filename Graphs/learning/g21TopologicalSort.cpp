// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
// 	void dfs(int node, int vis[], stack<int> &st,
// 	         vector<int> adj[]) {
// 		vis[node] = 1;
// 		for (auto it : adj[node]) {
// 			if (!vis[it]) dfs(it, vis, st, adj);
// 		}
// 		st.push(node);
// 	}
// public:
// 	//Function to return list containing vertices in Topological order.
// 	vector<int> topoSort(int V, vector<int> adj[])
// 	{
// 		int vis[1000] = {0};
// 		stack<int> st;
// 		for (int i = 0; i < V; i++) {
// 			if (!vis[i]) {
// 				dfs(i, vis, st, adj);
// 			}
// 		}

// 		vector<int> ans;
// 		while (!st.empty()) {
// 			ans.push_back(st.top());
// 			st.pop();
// 		}
// 		return ans;
// 	}
// };
//this only works in DAG , directed acyclic graphs.


//below is kahn's algorithm , here we maintain a vector containing all the list of indegree
//then we find a node with 0 indegree , push it into queue 
//proceding with filled nodes whose indegree is 0..... reduced the indegree of all its child , if any child's indegree becomes 0 we will push it into the queue while storing that node in ans


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	//Function to return list containing vertices in Topological order.
	vector<int> topoSort(int V, vector<int> adj[])
	{
		int indegree[1000] = {0};
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);
			// node is in your topo sort
			// so please remove it from the indegree

			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}

		return topo;
	}
};


int main() {

	//V = 6;
	vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
	int V = 6;
	Solution obj;
	vector<int> ans = obj.topoSort(V, adj);

	for (auto node : ans) {
		cout << node << " ";
	}
	cout << endl;

	return 0;
} 

/* There are lot of variations available of topological sorting 
https://takeuforward.org/data-structure/alien-dictionary-topological-sort-g-26/

*/