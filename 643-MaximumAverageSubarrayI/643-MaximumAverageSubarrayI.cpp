// Last updated: 21/07/2026, 09:06:13
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0, sum = 0;
        int maxi = INT_MIN;
        while(i < nums.size()){
            sum += nums[i];
            if(i-j == k-1){
                maxi = max(maxi, sum);
                sum -= nums[j++];
            }
            i++;
        }
        return (double)maxi/k;
    }
};