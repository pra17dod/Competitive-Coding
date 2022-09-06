class Solution {
public:
    unsigned long long t[1005][1005];
    
    unsigned long long lcs(string s, string p) {
        memset(t, 0, sizeof(t));
        
        int n = s.size(), m = p.size();
        
        
        for (int j = 0; j <= m; j++) {
            t[0][j] = 0;
        }
        for (int i = 0; i <= n; i++) {
            t[i][0] = 1;
        }
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i-1] == p[j-1]) {
                    t[i][j] = t[i-1][j] + t[i-1][j-1];
                }
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }
        
        return t[n][m];
    }
    
    
    int numDistinct(string s, string p) {
        return lcs(s, p);
    }
};