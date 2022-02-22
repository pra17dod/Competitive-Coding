class Solution {
public:
    int titleToNumber(string ct) {
        int ans = 0;
        reverse(ct.begin(), ct.end());
        for (int i = 0; i < ct.size(); i++) {
            ans += (ct[i] - 64)*pow(26,i);
        }
        return ans;
    }
};