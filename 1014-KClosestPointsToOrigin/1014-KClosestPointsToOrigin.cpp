// Last updated: 21/07/2026, 09:05:48
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> pq;

        for(auto &i:points){
            int dist = i[0]*i[0] + i[1]*i[1];
            pq.push({dist,{i[0],i[1]}});
            while(pq.size() > k){
                pq.pop();
            }
        }

        vector<vector<int>> res;
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();

            res.push_back({ top.second.first, top.second.second });
        }
        return res;
    }
};