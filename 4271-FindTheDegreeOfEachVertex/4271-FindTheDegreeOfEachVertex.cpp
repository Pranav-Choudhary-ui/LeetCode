// Last updated: 21/07/2026, 09:04:36
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> res;
        int count;
        for(int i=0;i<matrix.size();i++){
            count = 0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 1){
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};