class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int totalCnt = 0, rottenCnt = 0;
        int rows = grid.size(), cols = grid[0].size();
        vector<vector<int>> time (rows, vector <int> (cols, INT_MAX));
        vector<vector<int>> vis (rows, vector <int> (cols, 0));
        queue <pair<int, int>> q;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] != 0) {
                    totalCnt++;
                    if (grid[i][j] == 2) {
                        rottenCnt++;
                        q.push({i, j});
                        time[i][j] = 0;
                        vis[i][j] = 1;
                    }
                }
                
            }
        }
        
        int ar[] = {1, 0, -1,  0}; 
        int ac[] = {0, 1,  0, -1};
        
        int timeTaken = 0;
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++) {
                int dr = r + ar[i];
                int dc = c + ac[i];
                
                if (dr < rows and dc < cols and dr >= 0 and dc >= 0) {
                    if (grid[dr][dc] == 1 and time[dr][dc] > time[r][c] + 1) {
                        time[dr][dc] = time[r][c] + 1;
                        grid[dr][dc] = 2;
                        timeTaken = max(time[dr][dc], timeTaken);
                        if (vis[dr][dc] == 0) {
                            rottenCnt++;
                            vis[dr][dc] = 1;
                            q.push({dr, dc});
                        }
                    }
                }
            }
            
        }
        if (totalCnt == rottenCnt) return timeTaken;
        else return -1;
    }
};