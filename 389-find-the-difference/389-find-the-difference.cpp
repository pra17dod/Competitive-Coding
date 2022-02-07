class Solution {
public:
    char findTheDifference(string s, string t) {
        vector <int> st(27, 0);
        for (auto &i : s) {
            st[i-'a']++;
        }
        for (auto &i : t) {
            st[i-'a']--;
            if (st[i-'a'] < 0) {
                return i;
            }
        }
        return 'a';            
    }
};