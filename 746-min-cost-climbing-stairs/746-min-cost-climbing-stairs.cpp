class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int t[n + 1];
        memset (t, 0, sizeof(t));
        
        t[0] = cost[0];
        t[1] = cost[1];
        cost.push_back(0);
        
        for (int i = 2; i <= n; i++) {
            t[i] = min(t[i-1] + cost[i], t[i-2] + cost[i]); 
        }
        
        return t[n];
    }
};