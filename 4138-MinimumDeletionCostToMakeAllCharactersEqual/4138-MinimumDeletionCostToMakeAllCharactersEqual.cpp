// Last updated: 21/07/2026, 09:04:38
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
                vector<long long> keep(26, 0);
        long long total = 0;

        for (int i=0;i<s.size();i++) {
            total += cost[i];
            keep[s[i] - 'a'] += cost[i];
        }

        long long maxi = 0;
        for (int i=0;i<26;i++) {
            maxi = max(maxi, keep[i]);
        }

        return total - maxi;
    }
};