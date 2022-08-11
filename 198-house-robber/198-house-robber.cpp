class Solution {
public:
    int t[105];
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset (t, 0, sizeof(t));
        t[0] = 0;
        
        for (int i = 1; i <= min(2, n); i++) {
            t[i] = max(nums[i-1], t[i-1]);
        }
        
        for (int i = 3; i <= n; i++) {
            t[i] = max(nums[i-1] + t[i-3], max(nums[i-1] + t[i-2], t[i-1]));
        }
        
        return t[n];
    }
};