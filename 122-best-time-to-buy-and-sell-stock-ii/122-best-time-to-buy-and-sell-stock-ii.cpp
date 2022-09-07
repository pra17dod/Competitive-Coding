class Solution {
public:
    
//      Top Down Space Optimization
    
    int solve(vector<int>& prices) {
        int n = prices.size();
        
        vector <int> prev(2, 0), curr(2, 0);
        
        for(int i = n-1; i >= 0; i--) {
            curr[1] = max(-prices[i] + prev[0], prev[1]);
            curr[0] = max(prices[i] + prev[1], prev[0]);   
            
            prev = curr;
        } 
        return prev[1];
    }
    
    
//     Top Down
//     int solve(vector<int>& prices) {
//         int n = prices.size();
        
//         int t[n+1][2];
//         memset(t, 0, sizeof(t));
        
//         t[n][0] = t[n][1] = 0;
        
//         for(int i = n-1; i >= 0; i--) {
//             t[i][1] = max(-prices[i] + t[i+1][0], t[i+1][1]);
//             t[i][0] = max(prices[i] + t[i+1][1], t[i+1][0]);    
//         } 
//         return (t[0][1]);
//     }
    
    
//     Recursion + Memoization    
//     map <string, int> mp;
    
//     int solve (vector<int>& prices, int i, int b) {
//         if (i == prices.size()) return 0;

//         string key = to_string(i) + " " + to_string(b);
        
//         if (mp.find(key) != mp.end()) {
//             return mp[key];
//         }  
        
//         if (b) {
//             return mp[key] = max(-prices[i] + solve(prices, i + 1, 0),
//                         solve(prices, i + 1, 1));
//         }
//         else return mp[key] = max(prices[i] + solve(prices, i + 1, 1),
//                         solve(prices, i + 1, 0));
//     }
    
    int maxProfit(vector<int>& prices) {
//         O(n) Iterative
        
//         int profit = 0;
//         for (int i = 1; i < prices.size(); i++) {
//             if (prices[i-1] < prices[i]) {
//                 profit += prices[i] - prices[i-1];
//             }
//         }
//         return profit;
        
        return solve(prices);
    }
};