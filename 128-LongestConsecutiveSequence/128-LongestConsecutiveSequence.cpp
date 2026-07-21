// Last updated: 21/07/2026, 09:07:35
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxLen = 0;

        for (int num : s) {
            if (!s.count(num - 1)) {
                int current = num;
                int length = 1;

                while (s.count(current + 1)) {
                    current++;
                    length++;
                }

                maxLen = max(maxLen, length);
            }
        }

        return maxLen;
    }
};
