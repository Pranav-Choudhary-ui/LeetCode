// Last updated: 21/07/2026, 09:05:45
class Solution {
public:
    bool is_done(vector<int>& weights, int days, int weight){
        int ans = 1;
        int sum = 0;
        for(int i=0;i<weights.size();i++){
            if(weights[i] > weight){
                return false;
            }
            if(sum + weights[i] > weight){
                ans++;
                sum = weights[i];
            }
            else{
                sum += weights[i];
            }
        }
        return ans <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = 0;
        for(int i=0;i<weights.size();i++){
            h += weights[i];
        }
        int res;
        int mid;
        
        while(l<=h){
            mid = l + (h-l)/2;
            if(is_done(weights, days, mid)){
                res = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return res;
    }
};