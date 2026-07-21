// Last updated: 21/07/2026, 09:08:20
class Solution {
public:
    void permute(int open, int close, string s, vector<string>& res){
        if(open == 0 && close == 0){
            res.push_back(s);
            return;
        }

        if(open > 0){
            permute(open-1, close, s + "(", res);
        }
        if(open < close){
            permute(open, close-1, s + ")", res);
        }

    }


    vector<string> generateParenthesis(int n) {

        string s;
        vector<string> res;
        
        permute(n, n, s, res);

        return res;
    }
};