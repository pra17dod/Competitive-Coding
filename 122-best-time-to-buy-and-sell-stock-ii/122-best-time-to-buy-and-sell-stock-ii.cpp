class Solution {
public:
    map <string, int> mp;
    
    int solve (vector<int>& prices, int i, int b) {
        if (i == prices.size()) return 0;

        string key = to_string(i) + " " + to_string(b);
        
        if (mp.find(key) != mp.end()) {
            return mp[key];
        }  
        
        if (b) {
            return mp[key] = max(-prices[i] + solve(prices, i + 1, 0),
                        solve(prices, i + 1, 1));
        }
        else return mp[key] = max(prices[i] + solve(prices, i+1, 1),
                        solve(prices, i + 1, 0));
    }
    
    int maxProfit(vector<int>& prices) {
        return solve(prices, 0, 1);
    }
};