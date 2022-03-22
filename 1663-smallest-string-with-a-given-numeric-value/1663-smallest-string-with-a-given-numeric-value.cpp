class Solution {
public:
    string getSmallestString(int n, int k) {
        int q = (k-n) / 25, r = (k-n) % 25;
        string s = "";
        int p = max(n - q - 1, 0);
        while (p--) {
            s += "a";
        }
        if (q != n) s += (char)('a' + r);
        while (q--) {
            s += "z";
        }
        return s;
    }
};