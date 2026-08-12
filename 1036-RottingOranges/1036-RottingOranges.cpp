// Last updated: 12/08/2026, 22:26:32
class Solution {
public:
    vector<vector<int>> moves = {
        {1,0}, {-1,0},
        {0,1}, {0,-1}
    };
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        vector<vector<int>> visited(m, vector<int> (n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                    visited[i][j] = 1;
                }
            }
        }
        int c = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto node = q.front();
                q.pop();
                int x = node.first;
                int y = node.second;
                for(int i=0;i<moves.size();i++){
                    int new_x = x + moves[i][0];
                    int new_y = y + moves[i][1];
                    if(m > new_x && new_x >= 0 && n > new_y && new_y >= 0){
                        if(!visited[new_x][new_y] && grid[new_x][new_y] == 1){
                            visited[new_x][new_y] = 1;
                            grid[new_x][new_y] = 2;
                            q.push({new_x, new_y});
                        }
                    }
                }
            }
            if(!q.empty()){
                c++;
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return c;

    }
};