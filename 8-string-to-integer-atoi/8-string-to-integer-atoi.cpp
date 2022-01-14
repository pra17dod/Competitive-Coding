class Solution {
public:
    int myAtoi(string s) {
        string ans;
        bool f = false;
        bool n = false;
        for (auto &i : s) {
            if (!f and i == ' ') continue;
            if (!isdigit(i) and ((i != '-' and i != '+') or f)) break;
            if (i == '-' or i == '+') {
                if (i == '-') n = true;
                f = true;
            }
            else if (isdigit(i)) {
                ans += i;
                f = true;
            }
            
            
        }
        long long num = 0;
        for (auto &i : ans) {
            if (num > INT_MAX)
                break;
            num = num*10 + (i - '0');
        }
        if (!n and num > INT_MAX) return INT_MAX; 
        else if (-num < INT_MIN) return INT_MIN; 
        else return (n)? -num : num;
    }
};