class Solution {
public:
    int t[1005][1005];
    
    string lps(string a, string b) {
        memset (t, 0, sizeof(t));
        int n = a.size();
        // maintaining a priority queue for {length, index} of substring used while generating longest substring
        priority_queue < pair <int, int> > pq;
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i-1] == b[j-1]) {
                    t[i][j] = 1 + t[i-1][j-1];
                    if (t[i][j] > 1) {
                        // there might be the case when the longest substring is not the palindrome so storing
                        // substring with length > 2 as len = 1 is always a palindrome and can return any letter
                        pq.push({t[i][j], i});
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
            int i = s.second;
            
            // to generate substring
            for (int k = 0; k < len; k++) {
                // checking for palindromic substring
                if (a[i-1 - k] == a[i-1 - (len -1 -k)]) {
                    op.push_back(a[i-1 - k]);
                }
            }
            
            // if op.size() < len of substring then it is not palindrome we have to check for another substring
            if (op.size() == len) {
                // if we found the ans then break
                break;
            }
            // for next iteration
            else op.clear();
        }
        // if there was not palindromic substring of size > 1
        if (op.empty()) {
            op = a[0];
        }
        
        return op;
            
    }
    
    string longestPalindrome(string s) {
        if (s.empty())
            return "";
        
        string p = s; 
        reverse(p.begin(), p.end());
        return lps (s, p);
    }
};
