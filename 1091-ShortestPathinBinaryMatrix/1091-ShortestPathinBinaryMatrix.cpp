// Last updated: 23/08/2026, 19:45:51
1class Solution {
2public:
3
4    vector<vector<int>> moves = {
5        {1, 0},
6        {-1, 0},
7        {0, 1},
8        {0, -1},
9        {1, 1},
10        {1, -1},
11        {-1, 1},
12        {-1, -1}
13    };
14
15    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
16
17        int n = grid.size();
18        if(grid[0][0] == 1 ||
19           grid[n-1][n-1] == 1) {
20            return -1;
21        }
22
23        queue<pair<int,int>> q;
24        q.push({0, 0});
25        grid[0][0] = 1;
26        int count = 0;
27
28        while(!q.empty()) {
29            int size = q.size();
30            count++;
31            while(size--) {
32                auto [r, c] = q.front();
33                q.pop();
34                if(r == n-1 && c == n-1) {
35                    return count;
36                }
37                
38                for(auto move : moves) {
39                    int nr = r + move[0];
40                    int nc = c + move[1];
41
42                    if(nr >= 0 && nr < n && nc >= 0 && nc < n && grid[nr][nc] == 0) {
43                        grid[nr][nc] = 1;
44                        q.push({nr, nc});
45                    }
46                }
47            }
48        }
49        return -1;
50    }
51};