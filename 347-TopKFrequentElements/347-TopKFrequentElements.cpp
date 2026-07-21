// Last updated: 21/07/2026, 09:06:41
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        // vector<pair<int, int>> arr;
        // for(auto& i:freq){
        //     arr.push_back({i.second, i.first});
        // }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        for(auto& i:freq){
            pq.push({i.second,i.first});
            if(pq.size() > k){
                pq.pop();
            }
        }


        // sort(arr.rbegin(),arr.rend());

        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;        
    }
};