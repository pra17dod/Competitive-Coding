class Solution {
public:
    int t[105], p[105];
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(t, 0, sizeof(t));
        memset(p, 0, sizeof(p));
        
        if (n <= 3) {
            return *max_element(nums.begin(), nums.end());
        }
        
        for (int i = 1; i <= min(2, n); i++) {
            t[i] = max(nums[i-1], t[i-1]);
        }
        
        for (int i = 1; i <= min(2, n); i++) {
            p[i] = max(nums[i], p[i-1]);
        }
        
        for (int i = 3; i < n; i++) {
            t[i] = max(nums[i-1] + t[i-2], t[i-1]);
        }
        
        for (int i = 3; i < n; i++) {
            p[i] = max(nums[i] + p[i-2], p[i-1]);
        }
        
        return max(p[n-1], t[n-1]);
        
    }
};