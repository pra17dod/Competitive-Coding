class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0, sum = 0, ans = INT_MIN; 
        while (i != nums.size()) {
            if (sum > 0) sum += nums[i++];
            else sum = nums[i++];
            ans = max(ans, sum);
        }
        return ans;
    }
};