// Last updated: 21/07/2026, 09:06:26
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> right;

        int n = nums2.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            if(st.empty()){
                right[nums2[i]] = -1;
            }
            else{
                right[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            res.push_back(right[nums1[i]]);
        }
        return res;
    }
};