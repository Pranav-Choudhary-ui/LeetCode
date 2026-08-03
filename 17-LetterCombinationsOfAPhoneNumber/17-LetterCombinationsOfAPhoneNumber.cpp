// Last updated: 03/08/2026, 16:10:52
class Solution {
public:
    vector<string> dpad = {
        "","",
        "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(int x, int n, string& digits, string current, vector<string>& ans){
        if(n == 0){
            ans.push_back(current);
            return;
        }
        int t = dpad[digits[x]-'0'].length();
        for(int i=0;i<t;i++){
            current += dpad[digits[x]-'0'][i];
            solve(x+1, n-1, digits, current, ans);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        vector<string> ans;
        string current;
        int n = digits.length();
        solve(0, n, digits, current, ans);
        return ans;
    }
};