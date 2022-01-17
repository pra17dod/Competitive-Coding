class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char, string> cmp;
        string t;
        vector <string> st;
        for (auto &i : s) {
            if (i == ' ') {
                st.push_back(t);
                t = "";
            }
            else t += i;           
        }
        st.push_back(t);
        if (pattern.size() != st.size()) return false;
        map <string, int> mp;
        for (int i = 0; i < pattern.size(); i++) {
            if (cmp[pattern[i]] == "" and mp[st[i]] == 0) {
                cmp[pattern[i]] = st[i];
                mp[st[i]] = 1;
            }
            else if (cmp[pattern[i]] != st[i]) {
                return false;
            }
        }
        return true;
    }
};