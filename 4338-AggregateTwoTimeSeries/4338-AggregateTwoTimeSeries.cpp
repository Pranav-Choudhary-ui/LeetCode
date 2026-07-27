// Last updated: 27/07/2026, 18:51:47
class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>> ans;
        int i=series1.size()-1;
        int j=series2.size()-1;
        int v1 = 0;
        int v2 = 0;
        while(i>=0 && j>=0){
            if(series1[i][0] > series2[j][0]){
                v1 = series1[i][1];
                ans.push_back({series1[i][0],v1 + v2});
                i--;
            }
            else if(series2[j][0] > series1[i][0]){
                v2 = series2[j][1];
                ans.push_back({series2[j][0],v1 + v2});
                j--;
            }
            else{
                v1 = series1[i][1];
                v2 = series2[j][1];
                ans.push_back({series1[i][0],v1 + v2});
                i--;
                j--;
            }
        }
        
        while(i>=0){
            v1 = series1[i][1];
            ans.push_back({series1[i][0],v1 + v2});
            i--;
        }

        while(j>=0){
            v2 = series2[j][1];
            ans.push_back({series2[j][0],v1 + v2});
            j--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};