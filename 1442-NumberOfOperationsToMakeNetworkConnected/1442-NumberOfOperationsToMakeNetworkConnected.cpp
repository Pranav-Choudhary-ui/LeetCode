// Last updated: 23/07/2026, 22:34:38
class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<int>& visited, int node){
        visited[node] = 1;
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                dfs(adj, visited, adj[node][i]);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {

        if(connections.size() < n-1){
            return -1;
        }

        vector<vector<int>> adj(n);

        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }

        vector<int> visited(adj.size(), 0);
        int component = 0;
        int edges = 0;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                component++;
                dfs(adj, visited, i);
            }
        }
        
        return component-1;
    }
};