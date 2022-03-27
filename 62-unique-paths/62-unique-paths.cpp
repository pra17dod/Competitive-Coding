class Solution {
public:
    int dp[101][101] = {0};
    
public:
    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        if (i < 0 or i >= m or j < 0 or j >= n) return 0;
        if (i == m-1 and j == n-1) {
            return 1;
        };
        if (dp[i][j] != 0) return dp[i][j];
        else dp[i][j] = uniquePaths(m, n, i + 1, j) + uniquePaths(m, n, i, j + 1);
        return dp[i][j];  
    }
};