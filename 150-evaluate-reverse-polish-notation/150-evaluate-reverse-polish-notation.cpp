class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        int a = 0, b = 0;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" or 
                tokens[i] == "-" or 
                tokens[i] == "/" or 
                tokens[i] == "*" ) {
                if (!st.empty()) {
                    b = st.top(); 
                    st.pop();
                    a = st.top(); 
                    st.pop();
                    if (tokens[i] == "+")
                            st.push(a+b);
                    else if (tokens[i] == "-")
                            st.push(a-b);
                    else if (tokens[i] == "/")
                            st.push(a/b);
                    else if (tokens[i] == "*")
                            st.push(a*b);
                }
            }
            else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top() ;
    }
};