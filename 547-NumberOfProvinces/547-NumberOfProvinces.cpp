// Last updated: 12/08/2026, 22:27:08
class Solution {
public:
    void bfs(vector<vector<int>>& adj, int i, vector<int>& visited){
        queue<int> q;

        q.push(i);
        visited[i] = 1;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int nei:adj[node]){
                if(!visited[nei]){
                    visited[nei] = 1;
                    q.push(nei);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j){
                    continue;
                }
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                }
            }
        }

        int c = 0;
        vector<int> visited(n, 0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                c++;
                bfs(adj, i, visited);
            }
        }

        return c;
    }
};