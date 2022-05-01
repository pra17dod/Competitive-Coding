class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector <char> st, tt;
        int i = 0, j = 0;
        while (i < s.length()) {
            if (s[i] == '#') {
                if (!st.empty())
                st.pop_back();
            }
            else {
                st.push_back(s[i]);
            }
            i++;
        }
        while (j < t.length()) {
            if (t[j] == '#') {
                if (!tt.empty())
                tt.pop_back();
                
            }
            else {
                tt.push_back(t[j]);
            }
            j++;
        }
        return st == tt;
    }
};