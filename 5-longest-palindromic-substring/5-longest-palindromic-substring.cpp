class Solution {
public:
    int t[1005][1005];
    
    string lcs(string a, string b) {
        memset (t, 0, sizeof(t));
        int n = a.size();
        priority_queue < pair <int, pair <int, int>> > pq;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i-1] == b[j-1]) {
                    t[i][j] = 1 + t[i-1][j-1];
                    if (t[i][j] > 1) {
                        pq.push({t[i][j], {i, j}});
                    }
                }
                else t[i][j] = 0;
            } 
        }
        
        string op;

        while (!pq.empty()) {
            auto s = pq.top();
            pq.pop();
            
            int len = s.first;
            int i = s.second.first, j = s.second.second;
            
            
            for (int k = 0; k < len; k++) {
                if (a[i-1 - k] == a[i-1 - (len -1 -k)]) {
                    op.push_back(a[i-1 - k]);
                }
            }
                        
            if (op.size() == len) {
                break;
            }
            else op.clear();
        }
        
        if (op.empty()) {
            op = a[0];
        }
        
        return op;
            
    }
    
    bool isPalindrome(string s, int st) {
        if (st > s.size()/2) return true;
        
        if (s[st] == s[s.size() - st - 1]) 
            return isPalindrome(s, st+1);
        
        else return false;
    }
    
    string longestPalindrome(string s) {
        if (s.empty())
            return "";
        
        string p = s; 
        reverse(p.begin(), p.end());
        return lcs (s, p);
    }
};