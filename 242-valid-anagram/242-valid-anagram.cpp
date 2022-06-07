class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char, int> m, p;
        for (auto i : s)
            m[i]++;
        
        for (auto i : t)
            p[i]++;
        
        if (m==p) return true; else return false;
    } 
};