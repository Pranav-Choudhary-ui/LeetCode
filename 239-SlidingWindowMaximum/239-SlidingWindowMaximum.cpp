// Last updated: 21/07/2026, 09:06:53
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0, j=0;
        vector<int> res;
        deque<int> q;

        while(i < nums.size()){
            if(!q.empty() && nums[q.back()] < nums[i]){
                while(!q.empty() && nums[q.back()] < nums[i]){
                    q.pop_back();
                }
                q.push_back(i);
            }
            else{
                q.push_back(i);
            }

            if(i-j == k-1){
                res.push_back(nums[q.front()]);
                if(q.front() == j){
                    q.pop_front();
                }
                j++;
            }
            i++;
        }
        return res;
    }
};