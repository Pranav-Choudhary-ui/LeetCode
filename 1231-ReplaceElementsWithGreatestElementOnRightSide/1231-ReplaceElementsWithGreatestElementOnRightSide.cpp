// Last updated: 21/07/2026, 09:05:41
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            int x = arr[i];
            if(i == arr.size()-1){
                arr[i] = -1;
            }
            else{
                arr[i] = maxi;
            }
            maxi = max(maxi,x);
        }
        return arr;
    }
};