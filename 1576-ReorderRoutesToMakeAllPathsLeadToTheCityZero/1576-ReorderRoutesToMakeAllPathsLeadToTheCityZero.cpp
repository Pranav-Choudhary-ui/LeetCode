// Last updated: 21/07/2026, 09:05:27
class Solution {
public:
    void dfs(unordered_map<int, vector<int>>& forward, unordered_map<int, vector<int>>& backward, vector<int>& visited, int node, int& count){
        visited[node] = 1;
        for(int i:forward[node]){
            if(!visited[i]){
                count++;
                dfs(forward, backward, visited, i, count);
            }
        }
        for(int i:backward[node]){
            if(!visited[i]){
                dfs(forward, backward, visited, i, count);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int, vector<int>> forward;
        unordered_map<int, vector<int>> backward;
        for(int i=0;i<n-1;i++){
            forward[connections[i][0]].push_back(connections[i][1]);
            backward[connections[i][1]].push_back(connections[i][0]);
        }
        int count = 0;
        vector<int> visited(n,0);
        dfs(forward, backward, visited, 0, count);
        return count;
    }
};