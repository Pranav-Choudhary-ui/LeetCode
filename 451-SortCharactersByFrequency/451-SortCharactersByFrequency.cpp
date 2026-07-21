// Last updated: 21/07/2026, 09:06:32
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        // count frequency
        for (char c : s) {
            freq[c]++;
        }

        // max heap → {frequency, char}
        priority_queue<pair<int, char>> pq;

        for (auto &it : freq) {
            pq.push({it.second, it.first});
        }

        string result = "";

        while (!pq.empty()) {
            auto [count, ch] = pq.top();
            pq.pop();

            result += string(count, ch); // repeat char
        }

        return result;
    }
};