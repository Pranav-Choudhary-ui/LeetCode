// Last updated: 21/07/2026, 09:08:06
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size(); 

        vector<vector<int>> A(rows, vector<int>(cols));
        int a=0;
        for(int i=0;i<cols;i++){
            int b=0;
            for(int j=rows-1;j>=0;j--){
                A[a][b] = matrix[j][i];
                b++;
            }
            a++;
        }

        matrix = A;
    }
};