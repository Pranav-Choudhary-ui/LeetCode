// Last updated: 21/07/2026, 09:06:11
class Solution {
public:
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    priority_queue<pair<int,int>> maxHeap;

    for (int num : arr) {
        maxHeap.push({abs(num - x), num});

        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    vector<int> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    sort(result.begin(), result.end());
    return result;
}
};