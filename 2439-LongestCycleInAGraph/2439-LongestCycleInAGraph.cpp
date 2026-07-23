// Last updated: 23/07/2026, 22:34:18
class Solution {
public:
    void dfs(vector<int>& edges, vector<int>& visited, int node, vector<int>& path, int& maxi,int depth){
        visited[node] = 1;
        path[node] = depth;

        if(edges[node] == -1){
            path[node] = 0;
            return;
        }

        int nei = edges[node];
        if(!visited[nei]){
            dfs(edges, visited, nei, path, maxi, depth+1);
        }
        else{
            if(path[nei]){
                maxi = max(maxi, path[node]-path[nei]+1);
            }
        }
        
        path[node] = 0;
        depth--;

    }

    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<int> visited(n,0);
        vector<int> path(n,0);
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(edges, visited, i, path, maxi, 1);   
            }
        }
        if(maxi != INT_MIN){
            return maxi;
        }
        return -1;
    }
};