// Last updated: 21/07/2026, 09:05:58
class Solution {
public:
    vector<string> ans;
    
    void solve(string &s, int idx, string curr) {
        if(idx == s.size()) {
            ans.push_back(curr);
            return;
        }
        
        char c = s[idx];
        
        if(isdigit(c)) {
            solve(s, idx + 1, curr + c);
        } 
        else {
            
            solve(s, idx + 1, curr + (char)tolower(c));
            solve(s, idx + 1, curr + (char)toupper(c));
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        solve(s, 0, "");
        return ans;
    }
};
