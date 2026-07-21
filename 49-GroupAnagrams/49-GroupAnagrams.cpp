// Last updated: 21/07/2026, 09:08:04
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> group;

        for(auto& str:strs){
            string unsorted = str;
            sort(str.begin(),str.end());
            group[str].push_back(unsorted);
        }

        vector<vector<string>> res;
        for(auto& i:group){
            res.push_back(i.second);
        }

        return res;

    }
};