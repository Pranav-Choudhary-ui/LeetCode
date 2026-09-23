// Last updated: 23/09/2026, 11:43:53
1class Solution {
2public:
3    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
4        vector<pair<int, int>> arr;
5        for(int i=0;i<boxTypes.size();i++){
6            arr.push_back({boxTypes[i][1], boxTypes[i][0]});
7        }
8        sort(arr.rbegin(), arr.rend());
9
10        int units = 0;
11        for(auto i:arr){
12            if(i.second > truckSize){
13                units += truckSize * i.first;
14                break;
15            }
16            units += i.second * i.first;
17            truckSize -= i.second;
18        }
19        return units;
20    }
21};