// Last updated: 21/07/2026, 09:05:51
class Solution {
public:
    void mergeArr(vector<int>& a, int l, int m, int r) {
        vector<int> left(a.begin() + l, a.begin() + m + 1);
        vector<int> right(a.begin() + m + 1, a.begin() + r + 1);
        int i = 0, j = 0, k = l;
        while (i < left.size() && j < right.size()) {
            if (left[i] <= right[j]) a[k++] = left[i++];
            else a[k++] = right[j++];
        }
        while (i < left.size()) a[k++] = left[i++];
        while (j < right.size()) a[k++] = right[j++];
    }

    void mergeSort(vector<int>& a, int l, int r) {
        if (l >= r) return;
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        mergeArr(a, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
