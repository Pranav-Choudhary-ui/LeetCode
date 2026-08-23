// Last updated: 23/08/2026, 18:24:49
1class Solution {
2public:
3    vector<vector<int>> moves = {
4        {1, 0},
5        {-1, 0},
6        {0, 1},
7        {0, -1}
8    };
9
10    void bfs(int r, int c, vector<vector<char>>& grid) {
11
12        int m = grid.size();
13        int n = grid[0].size();
14        queue<pair<int, int>> q;
15        q.push({r, c});
16        grid[r][c] = '0';
17        while(!q.empty()) {
18            auto [y, x] = q.front();
19            q.pop();
20            for(auto move : moves) {
21                int ny = y + move[0];
22                int nx = x + move[1];
23                if(ny >= 0 && ny < m &&
24                    nx >= 0 && nx < n &&
25                    grid[ny][nx] == '1') {
26                    grid[ny][nx] = '0';
27                    q.push({ny, nx});
28                }
29            }
30        }
31    }
32
33    int numIslands(vector<vector<char>>& grid) {
34
35        int m = grid.size();
36        int n = grid[0].size();
37        int count = 0;
38        for(int i = 0; i < m; i++) {
39            for(int j = 0; j < n; j++) {
40                if(grid[i][j] == '1') {
41                    count++;
42                    bfs(i, j, grid);
43                }
44            }
45        }
46
47        return count;
48    }
49};