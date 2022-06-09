class Solution {
public:
    int longestPalindrome(string s) {
        map <char, int> mp;
        for (auto i : s) {
            mp[i]++;
        }
        int l = 0, si = 0;
        for (auto i : mp) {
            l += i.second/2;
            si += i.second%2;
        }
        
        if (si == 0) return l*2;
        else return l*2 +1;
    }
};