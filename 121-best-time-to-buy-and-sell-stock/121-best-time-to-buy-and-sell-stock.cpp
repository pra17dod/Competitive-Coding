class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int mn = INT_MAX, mx = INT_MIN;
        bool b = false;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < mn) {
                mn = prices[i];
                mx = prices[i];
            }
            else if (prices[i] > mx) {
                mx = prices[i];
                b = true;
            }   
            if (b and mn != mx) {
                ans = max(ans, (mx - mn));
                b = false;
            }
        }
        return ans;   
    }
};