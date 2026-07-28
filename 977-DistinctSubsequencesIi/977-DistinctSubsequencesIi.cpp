// Last updated: 28/07/2026, 23:44:56
class Solution {
public:
    const int MOD = 1e9 + 7;

    int solve(int idx, string &s, vector<int> &dp) {
        if (idx == s.size())
            return 1; // empty subsequence

        if (dp[idx] != -1)
            return dp[idx];

        long long ans = 1; // empty subsequence from this point

        vector<bool> used(26, false);

        for (int i = idx; i < s.size(); i++) {
            if (!used[s[i] - 'a']) {
                used[s[i] - 'a'] = true;
                ans = (ans + solve(i + 1, s, dp)) % MOD;
            }
        }

        return dp[idx] = ans;
    }

    int distinctSubseqII(string s) {
        vector<int> dp(s.size(), -1);

        // subtract 1 to remove the empty subsequence
        return (solve(0, s, dp) - 1 + MOD) % MOD;
    }
};