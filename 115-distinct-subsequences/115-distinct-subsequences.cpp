class Solution {
public:
    unsigned long long t[1005];
    
    unsigned long long lcs(string s, string p) {
        memset(t, 0, sizeof(t));
        
        int n = s.size(), m = p.size();
        
        t[0] = 1;
        
        for (int i = 1; i <= n; i++) {
            for (int j = m; j >= 1; j--) {
                // rev direction bcoz then only we will be able to use
                // t[i]
                if (s[i-1] == p[j-1]) {
                    t[j] = t[j-1] + t[j];
                }
            }
        }
        
        
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= m; j++) {
        //         cout << t[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        return t[m];
    }
    
    
    int numDistinct(string s, string p) {
        return lcs(s, p);
    }
};