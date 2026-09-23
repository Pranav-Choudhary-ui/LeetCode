// Last updated: 23/09/2026, 12:50:42
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5
6        int left = 0;
7        int right = people.size() - 1;
8        int boats = 0;
9
10        while(left <= right) {
11            if(people[left] + people[right] <= limit) {
12                left++;
13            }
14
15            right--;
16            boats++;
17        }
18
19        return boats;
20    }
21};