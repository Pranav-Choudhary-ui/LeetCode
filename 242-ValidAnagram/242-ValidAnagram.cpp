// Last updated: 21/07/2026, 09:06:51
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> tab;
        for(int i=0;i<s.length();i++){
            tab[s[i]]++;
            tab[t[i]]--;
        }

        for(auto& i:tab){
            if(i.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};