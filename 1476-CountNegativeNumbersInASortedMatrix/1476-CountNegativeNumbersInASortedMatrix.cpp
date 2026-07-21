// Last updated: 21/07/2026, 09:05:33
class Solution {
public:

    int ans(vector<int> arr){
        int idx = 0;
        int l=0;
        int h=arr.size()-1;
        if(arr[l]<0){
            return h-l+1;
        }
        else if(arr[h]>=0){
            return 0;
        }
        while(l<=h){
            int mid = l+(h-l)/2;
            if(arr[mid]<0){
                idx = mid;
                h = mid-1;
            }
            else if(arr[mid]>=0){
                l = mid+1;
            }
        }
        return (arr.size()-idx);
        
    }


    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto arr: grid){
            count = count + ans(arr);
        }
        return count;
    }
};