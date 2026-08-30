// Last updated: 30/08/2026, 21:01:30
1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int size = heights.size();
5        vector<int> smallerleft(size);
6        vector<int> smallerright(size);
7        stack<int> lst;
8        stack<int> rst;
9
10        for(int i=0;i<size;i++){
11            while(!lst.empty() && heights[lst.top()] >= heights[i]){
12                lst.pop();
13            }
14
15            if(lst.empty()){
16                smallerleft[i] = -1;
17            }
18            else{
19                smallerleft[i] = lst.top();
20            }
21            lst.push(i);
22
23        }
24
25        for(int i=size-1;i>=0;i--){
26            while(!rst.empty() && heights[rst.top()] >= heights[i]){
27                rst.pop();
28            }
29
30            if(rst.empty()){
31                smallerright[i] = size;
32            }
33            else{
34                smallerright[i] = rst.top();
35            }
36            rst.push(i);
37
38        }
39
40        int maxi = 0;
41        for(int i=0;i<size;i++){
42            int ans = heights[i] * (smallerright[i]-smallerleft[i]-1);
43            maxi = max(ans, maxi);
44        }
45
46        return maxi;
47    }
48};