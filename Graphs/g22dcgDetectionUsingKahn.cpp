#include <bits/stdc++.h>
using namespace std;


//this is simple because inserting in the queue will stop at certain time because it will run out of 
//nodes having 0 indegree at some point of time
// thus if topo sort does not contain same number of element as the size of nodes then it implies it was stopped at certain position and it is a directed graph

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> indegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it: adj[i])
            {
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it: adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
            topo.push_back(node);
        }
        if(topo.size()!=V) return true;
        else 
        return false;
    }
};