class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        bool ans = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(')');
            }          
            else if (s[i] == '{') {
                st.push('}');
            }         
            else if (s[i] == '[')   {
                st.push(']');
            }          
            else if (!st.empty() and s[i] == st.top()) {
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        } 
        if (!st.empty()) {
            ans = false;
        }
        return ans;
    }
};