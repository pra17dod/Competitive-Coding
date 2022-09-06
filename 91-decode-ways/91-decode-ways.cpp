class Solution {
public:
    int t[105];
    
//     int solve(string s, int i) {
//         int n = s.size();
//         if (i == n) {
//             return 1;
//         }
        
//         if (t[i] != 0) {
//             return t[i];
//         }
        
//         if (s[i] == '0') {
//             return 0;
//         }
        
//         int l1 = 0, l2 = 0;
        
//         if (i <= n - 2) {
//             int k = stoi(s.substr(i,2));
//             if (k <= 26 and k > 0) {
//                 l2 = solve(s, i+2);
//             } 
//         }
//         l1 = solve(s, i+1);
//         return t[i] = l1 + l2; 
//     } 
    
    
    int numDecodings(string s) {
        if (s.empty()) return 0;
        if (s[0] == '0') return 0;
        
        int n = s.size();
        
        memset(t, 0, sizeof(t));
    
        t[0] = t[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            if (s[i-1] != '0') 
                t[i] += t[i-1];
            int k = stoi(s.substr(i-2, 2));
            if (k >= 10 and k <= 26) 
                    t[i] += t[i-2];
            
        }
        
        return t[n];       
    }
};