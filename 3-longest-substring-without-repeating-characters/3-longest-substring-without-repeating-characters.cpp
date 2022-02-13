class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> mp (128, -1);
        int ans = 0;
        int st = -1;
        for (int i = 0; i < s.size(); i++) {
            if (mp[int(s[i])] > st) {
                st = mp[int(s[i])];
            }
            mp[int(s[i])] = i;
            ans = max(ans, i - st); 
        }
        return ans;
    }
};