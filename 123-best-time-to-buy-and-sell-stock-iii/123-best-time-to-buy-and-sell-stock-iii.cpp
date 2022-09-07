class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        vector <vector<int>> ahead (2, vector <int> (3, 0));
        vector <vector<int>> curr (2, vector <int> (3, 0));
        
        for (int i = n-1; i >= 0; i--) {
            for (int t = 2; t >= 1; t--) {
                curr[1][t] = max(-prices[i] + ahead[0][t],
                                    ahead[1][t]);
                curr[0][t] = max(prices[i] + ahead[1][t-1],
                                    ahead[0][t]);
            }
            ahead = curr;
        }
        
        return ahead[1][2];
    }
};