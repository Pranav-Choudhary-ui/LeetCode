// Last updated: 12/08/2026, 22:26:52
class Solution {
public:
    void bfs(int k, vector<vector<pair<int, int>>>& graph, vector<int>& time){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        
        while(!pq.empty()){
            auto node = pq.top();
            pq.pop();
            int W = node.first;
            int N = node.second;
            if(W > time[N]){
                continue;
            }
            for(auto nei:graph[N]){
                int n = nei.first;
                int wei = nei.second;
                if(time[n] > W+wei){
                    time[n] = W+wei;
                    pq.push({time[n], n});
                }
            }
        }   
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int len = times.size();
        vector<vector<pair<int, int>>> adj(n);
        for(int i=0;i<len;i++){
            int a = times[i][0]-1;
            int b = times[i][1]-1;
            int c = times[i][2];
            adj[a].push_back({b, c});
        }
        
        vector<int> time(n, INT_MAX);
        time[k-1] = 0;
    
        bfs(k-1, adj, time);
        for(int i:time){
            cout << i << " ";
        }
        int maxi = *max_element(time.begin(), time.end());
        return  maxi == INT_MAX ? -1 : maxi;
    }
};