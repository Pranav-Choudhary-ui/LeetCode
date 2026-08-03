// Last updated: 03/08/2026, 16:08:35
class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& ans, vector<int> current, int index){
        if(k == 0 && n == 0){
            ans.push_back(current);
            return;
        }
        
        for(int i=index;i<10;i++){
            if(n < i){
                break;
            }
            current.push_back(i);
            solve(k-1, n-i, ans, current, i+1);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans; 
        vector<int> current;
        solve(k, n, ans, current, 1);
        return ans;
    }
};