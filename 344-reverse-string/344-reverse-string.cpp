class Solution {
public:
    void reverseString(vector<char>& s) {
        rec(s, 0);
    }
    
    void rec(vector<char> &s, int st) {
        if (st >= s.size()/2) 
            return;        
        swap(s[st], s[s.size() -1 - st]);
        return rec(s, st + 1);
    }
};