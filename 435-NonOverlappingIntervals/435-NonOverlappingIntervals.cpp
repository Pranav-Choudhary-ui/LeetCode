// Last updated: 03/08/2026, 16:07:47
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<pair<int, int>> arr;
        int n = intervals.size();
        for(int i=0;i<n;i++){
            int s = intervals[i][0];
            int e = intervals[i][1];
            arr.push_back({e, s});
        }
        sort(arr.begin(), arr.end());
        int c = 0;
        int end = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i].second < end){
                c++;
            }
            else{
                end = arr[i].first;
            }
        }
        return c;
    }
};