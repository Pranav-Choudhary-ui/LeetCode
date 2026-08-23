// Last updated: 23/08/2026, 18:07:09
1class Solution {
2public:
3
4    vector<vector<int>> moves = {
5        {1, 0},
6        {-1, 0},
7        {0, 1},
8        {0, -1}
9    };
10
11    void solve(vector<vector<char>>& board) {
12
13        int m = board.size();
14        int n = board[0].size();
15
16        queue<pair<int, int>> q;
17
18        for(int i = 0; i < m; i++) {
19
20            if(board[i][0] == 'O') {
21                board[i][0] = '#';
22                q.push({i, 0});
23            }
24
25            if(board[i][n - 1] == 'O') {
26                board[i][n - 1] = '#';
27                q.push({i, n - 1});
28            }
29        }
30
31        for(int j = 0; j < n; j++) {
32
33            if(board[0][j] == 'O') {
34                board[0][j] = '#';
35                q.push({0, j});
36            }
37
38            if(board[m - 1][j] == 'O') {
39                board[m - 1][j] = '#';
40                q.push({m - 1, j});
41            }
42        }
43
44        while(!q.empty()) {
45
46            auto [r, c] = q.front();
47            q.pop();
48
49            for(auto move : moves) {
50
51                int nr = r + move[0];
52                int nc = c + move[1];
53
54                if(nr >= 0 && nr < m &&
55                   nc >= 0 && nc < n &&
56                   board[nr][nc] == 'O') {
57
58                    board[nr][nc] = '#';
59
60                    q.push({nr, nc});
61                }
62            }
63        }
64
65        for(int i = 0; i < m; i++) {
66            for(int j = 0; j < n; j++) {
67
68                if(board[i][j] == 'O') {
69                    board[i][j] = 'X';
70                }
71                else if(board[i][j] == '#') {
72                    board[i][j] = 'O';
73                }
74            }
75        }
76    }
77};