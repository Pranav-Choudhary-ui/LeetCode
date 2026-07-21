// Last updated: 21/07/2026, 09:07:57
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> zero_rows;
        unordered_set<int> zero_cols;

        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                if(matrix[i][j] == 0) {
                    zero_rows.insert(i);
                    zero_cols.insert(j);
                }
            }
        }


        for(int i : zero_rows) {
            for(int j = 0; j < cols; ++j) {
                matrix[i][j] = 0;
            }
        }

        for(int j : zero_cols) {
            for(int i = 0; i < rows; ++i) {
                matrix[i][j] = 0;
            }
        }
    }
};
