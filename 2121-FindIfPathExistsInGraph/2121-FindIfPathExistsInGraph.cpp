// Last updated: 21/07/2026, 09:05:09
class Solution {
public:
    bool bfs(int source, int destination, vector<vector<int>> adj, int n){

        queue<int> q;
        vector<bool> visited(n, false);
        
        q.push(source);
        visited[source] = true;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(int i : adj[node]){
                if(!visited[i]){
                    if(i == destination) return true;
                    visited[i] = true;
                    q.push(i);
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;

        vector<vector<int>> adj(n);

        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        return bfs(source, destination, adj, n);
        
    }
};