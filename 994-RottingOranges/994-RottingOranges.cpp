// Last updated: 03/09/2026, 21:49:20
1class Solution {
2public:
3    vector<vector<int>> moves = {
4        {1,0}, {-1,0},
5        {0,1}, {0,-1}
6    };
7    int orangesRotting(vector<vector<int>>& grid) {
8        int m = grid.size();
9        int n = grid[0].size();
10        queue<pair<int, int>> q;
11        for(int i=0;i<m;i++){
12            for(int j=0;j<n;j++){
13                if(grid[i][j] == 2){
14                    q.push({i, j});
15                }
16            }
17        }
18        int c = 0;
19        while(!q.empty()){
20            int size = q.size();
21            c++;
22            while(size--){
23                auto node = q.front();
24                q.pop();
25                int x = node.first;
26                int y = node.second;
27                for(int i=0;i<moves.size();i++){
28                    int new_x = x + moves[i][0];
29                    int new_y = y + moves[i][1];
30                    if(m > new_x && new_x >= 0 && n > new_y && new_y >= 0){
31                        if(grid[new_x][new_y] == 1){
32                            grid[new_x][new_y] = 2;
33                            q.push({new_x, new_y});
34                        }
35                    }
36                }
37            }
38        }
39
40        for(int i=0;i<m;i++){
41            for(int j=0;j<n;j++){
42                if(grid[i][j] == 1){
43                    return -1;
44                }
45            }
46        }
47        if(c == 0) return 0;
48        return c-1;
49
50    }
51};