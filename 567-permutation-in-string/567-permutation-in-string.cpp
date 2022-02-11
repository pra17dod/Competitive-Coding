class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector <int> mp(126, 0);
        for (int i = 0; i < s1.length(); i++) {
            mp[int(s1[i])]++;
        }
        bool ans = false;
        vector <int> cp(126, 0);
        int st = 0;
        for (int i = 0; i < s2.length(); i++) {
            if (i < s1.length()-1) {
                cp[int(s2[i])]++;
                continue;
            }
            cp[int(s2[i])]++;
            if (cp == mp) {
                ans = true;
                break;
            }
            else {
                cp[int(s2[st])]--;
                st++;
            }                       
        }
        return ans;
    }
};