class Solution {
public:
    
    int t[505][505];
    
    int solve(string a, string b) {
        int n = a.size(), m = b.size();
        
        memset(t, -1, sizeof(t));
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                if (i == 0) t[i][j] = j;
                if (j == 0) t[i][j] = i;
            }
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i-1] != b[j-1]) {
                    int rep = 1 + t[i-1][j-1];
                    int del = 1 + t[i-1][j];
                    int ins = 1 + t[i][j-1];
                    t[i][j] = min(rep, min(del, ins));
                }
                else t[i][j] = t[i-1][j-1];
            }
        }
        return t[n][m];
    }
    
    int minDistance(string a, string b) {
        return solve(a, b);
    }
};