class Solution {
public:
    int fact(int p, int n) {
        if (n == p-2) return 1;
        else return n*(n-1);
    }
    int numPairsDivisibleBy60(vector<int>& time) {
        vector <int> cmpl (60, 0);
        for (auto &i : time) {
            cmpl[i%60]++;
        }
        int st = 1, ans = fact(cmpl[0],cmpl[0])/2 + fact(cmpl[30],cmpl[30])/2;
        while (st < 30) {
            ans += cmpl[st]*cmpl[59 - st + 1];
            st++;
        }
        return ans;
    }
};