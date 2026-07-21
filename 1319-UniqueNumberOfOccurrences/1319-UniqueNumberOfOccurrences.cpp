// Last updated: 21/07/2026, 09:05:36
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }

        unordered_set<int> temp;
        for (auto &p : freq) {
            if (temp.count(p.second))
                return false;
            temp.insert(p.second);
        }
        return true;
    }
};