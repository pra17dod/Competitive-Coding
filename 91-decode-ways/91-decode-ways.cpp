class Solution {
public:
    int t[105];
    
    int solve(string s, int i) {
        int n = s.size();
        if (i == n) {
            return 1;
        }
        
        if (t[i] != 0) {
            return t[i];
        }
        
        if (s[i] == '0') {
            return 0;
        }
        
        int l1 = 0, l2 = 0;
        
        if (i <= n - 2) {
            int k = stoi(s.substr(i,2));
            if (k <= 26 and k > 0) {
                l2 = solve(s, i+2);
            } 
        }
        l1 = solve(s, i+1);
        return t[i] = l1 + l2; 
    } 
    
    
    int numDecodings(string s) {
        if (s.empty()) return 0;
        
        memset(t, 0, sizeof(t));
    
        return solve(s, 0);       
    }
};