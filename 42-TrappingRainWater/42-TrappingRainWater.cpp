// Last updated: 21/07/2026, 09:08:10
class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j = height.size()-1, res = 0;
        int maxl = height[0], maxr = height[height.size()-1];

        while(i<j){
            if(height[i] < height[j]){
                i++;
                maxl = max(maxl,height[i]);
                res += maxl - height[i];
            }
            else{
                j--;
                maxr = max(maxr,height[j]);
                res += maxr - height[j];
            }
        }
        return res;
    }
};