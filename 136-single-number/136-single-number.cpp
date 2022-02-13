class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        auto it = nums.begin();
        while (++it != nums.end())
            ans ^= *it; 
        return ans;
    }
};