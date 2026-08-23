// Last updated: 23/08/2026, 18:11:24
1class Solution {
2public:
3    vector<vector<int>> moves = {
4        {1, 0},
5        {-1, 0},
6        {0, 1},
7        {0, -1}
8    };
9
10    int numEnclaves(vector<vector<int>>& grid) {
11
12        int m = grid.size();
13        int n = grid[0].size();
14
15        queue<pair<int, int>> q;
16
17        for(int i = 0; i < m; i++) {
18
19            if(grid[i][0] == 1) {
20                grid[i][0] = 0;
21                q.push({i, 0});
22            }
23
24            if(grid[i][n - 1] == 1) {
25                grid[i][n - 1] = 0;
26                q.push({i, n - 1});
27            }
28        }
29
30        for(int j = 0; j < n; j++) {
31
32            if(grid[0][j] == 1) {
33                grid[0][j] = 0;
34                q.push({0, j});
35            }
36
37            if(grid[m - 1][j] == 1) {
38                grid[m - 1][j] = 0;
39                q.push({m - 1, j});
40            }
41        }
42
43        while(!q.empty()) {
44
45            auto [r, c] = q.front();
46            q.pop();
47
48            for(auto move : moves) {
49
50                int nr = r + move[0];
51                int nc = c + move[1];
52
53                if(nr >= 0 && nr < m &&
54                   nc >= 0 && nc < n &&
55                   grid[nr][nc] == 1) {
56
57                    grid[nr][nc] = 0;
58
59                    q.push({nr, nc});
60                }
61            }
62        }
63
64        int ans = 0;
65
66        for(int i = 0; i < m; i++) {
67            for(int j = 0; j < n; j++) {
68
69                if(grid[i][j] == 1) {
70                    ans++;
71                }
72            }
73        }
74
75        return ans;
76    }
77};