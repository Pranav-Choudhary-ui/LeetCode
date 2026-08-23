// Last updated: 23/08/2026, 13:28:27
1class Solution {
2public:
3    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
4        int n = *max_element(arr1.begin(), arr1.end());
5        vector<int> count(n+1, 0);
6
7        for(int i=0;i<arr1.size();i++){
8            count[arr1[i]]++;
9        }
10
11        for(int i=0;i<count.size();i++){
12            cout << count[i];
13        }
14        vector<int> res;
15        for(int i:arr2){
16            while(count[i] > 0){
17                res.push_back(i);
18                count[i]--;
19            }
20        }
21        for(int i=0;i<count.size();i++){
22            while(count[i] > 0){
23                res.push_back(i);
24                count[i]--;
25            }
26        }
27        return res;
28    }
29};