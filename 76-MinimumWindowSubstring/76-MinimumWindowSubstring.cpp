// Last updated: 21/07/2026, 09:07:53
class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size()){
            return "";
        }

        unordered_map<char,int> need;
        for(char i:t){
            need[i]++;
        }

        int minLen = INT_MAX;
        int req = t.size();
        int start = 0;
        int j = 0;
        int i = 0;
        while(i < s.length()){
            
            if(need.count(s[i]) && need[s[i]] > 0){
                req--;
            }
            need[s[i]]--;

            while(req == 0){

                if(i-j+1 < minLen){
                    minLen = i-j+1;
                    start = j;
                }

                need[s[j]]++;
                if(need[s[j]] > 0){
                    req++;
                }
                j++;
            }
            i++;
        }
        return minLen == INT_MAX ? "" : s.substr(start,minLen); 
    }
};