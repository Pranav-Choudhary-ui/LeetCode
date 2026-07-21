// Last updated: 21/07/2026, 09:05:44
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }

        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x==y){
                continue;
            }
            pq.push(x-y);
        }
        return pq.size() ? pq.top():0;
    }
};