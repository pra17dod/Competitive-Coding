class Solution {
public:
    bool rec(vector <char> &s, int i, int j) {
        if (i > j) return true;
        
        if (s[i] == s[j])
            return rec(s, i+1, j-1);
        else return false;
    }
    
public:
    bool isPalindrome(string s) {
        vector <char> str;
        for (auto &i : s) {
            i = tolower(i); 
            if (ispunct(i) or i == ' ') 
                continue;
            str.push_back(i);
        }
        int j = str.size() - 1;
        return rec(str, 0, j);
    }
};