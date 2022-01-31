class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int best = 0;
        for (auto &b : accounts) {
            int sum = 0;
            for (auto &i : b) {
                sum += i;
            }
            best = max(sum, best);
        }
        return best;
    }
};