class Solution {
public:
    string getSmallestString(int n, int k) {
        string s (max(n - (k-n) / 25 - 1, 0), 'a');
        if ((k-n) / 25 != n) s += (char)('a' + (k-n) % 25);
        string p ((k-n) / 25, 'z');
        return s+p;
    }
};