class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        int n = num.length();
        if (k == 0) return num;
        stack <char> st;
        st.push(num[0]);
        for (int i = 1; i < n; i++) {
            while (k and !st.empty() and num[i] < st.top()) {
                k--;
                st.pop();
            }
            st.push(num[i]);
            
            if (st.size() == 1 and st.top() == '0') {
                st.pop();  
            }
        }    
        while (k and !st.empty()) {
            k--; st.pop();
        }
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return (res == "")? "0": res;
    }
};