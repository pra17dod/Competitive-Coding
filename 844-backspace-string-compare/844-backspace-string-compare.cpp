class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st, tt;
        int i = 0, j = 0;
        while (i < s.length()) {
            if (s[i] == '#') {
                if (!st.empty())
                st.pop();
            }
            else {
                st.push(s[i]);
            }
            i++;
        }
        while (j < t.length()) {
            if (t[j] == '#') {
                if (!tt.empty())
                tt.pop();
                
            }
            else {
                tt.push(t[j]);
            }
            j++;
        }
        return st == tt;
    }
};