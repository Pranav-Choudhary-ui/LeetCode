// Last updated: 21/07/2026, 09:07:34
class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s[i++] != s[j--]){
                return false;
            }
        }
        return true;
    }

    void solve(string& s, int idx, int n, vector<string>& output, vector<vector<string>>& res){
        if(idx == n){
            res.push_back(output);
            return;
        }

        for(int i=idx;i<n;i++){
            if(isPalindrome(s, idx, i)){
                output.push_back(s.substr(idx, i - idx + 1));
                solve(s, i+1, n, output, res);
                output.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> output;
        int n = s.size();
        solve(s, 0, n, output, res);

        return res;
    }
};