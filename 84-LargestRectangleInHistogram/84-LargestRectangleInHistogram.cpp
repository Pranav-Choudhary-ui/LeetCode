// Last updated: 21/07/2026, 09:07:50
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> rstack;
        stack<int> lstack;

        int n = heights.size();
        vector<int> rans(n);
        vector<int> lans(n);

        for(int i=n-1;i>=0;i--){
            while(!rstack.empty() && heights[i] <= heights[rstack.top()]){
                rstack.pop();
            }
            if(rstack.empty()){
                rans[i] = n;
            }
            else{
                rans[i] = rstack.top();
            }
            rstack.push(i);
        }
        for(int i=0;i<n;i++){
            while(!lstack.empty() && heights[lstack.top()] >= heights[i]){
                lstack.pop();
            }
            if(lstack.empty()){
                lans[i] = -1;
            }
            else{
                lans[i] = lstack.top();
            }
            lstack.push(i);
        }

        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int width = rans[i] - lans[i] -1;
            maxi = max(maxi, width * heights[i]);
        }
        return maxi;
    }
};