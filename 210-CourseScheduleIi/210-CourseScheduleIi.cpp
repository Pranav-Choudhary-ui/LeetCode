// Last updated: 22/07/2026, 12:14:05
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }

        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        vector<int> res;
        while(!q.empty()){
            int node = q.front();
            res.push_back(node);
            q.pop();

            for(int nei:adj[node]){
                indegree[nei]--;
                if(indegree[nei] == 0){
                    q.push(nei);
                }
            }
        }
        for(int i=0;i<numCourses;i++){
            if(indegree[i] != 0){
                return {};
            }
        }
        return res;

    }
};