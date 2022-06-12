class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map <int, int> ps;
        int ans = 0, sum = 0;
        int i = 1, j = 1;
        while (j <= nums.size()+1  and i <= j) {
            if (j == nums.size()+1 or ps[nums[j-1]] != 0) {
                ans = max(ans, sum);
                if (j != nums.size() + 1) {
                    while (i < ps[nums[j-1]] + 1) {
                        ps[nums[i-1]] = 0;
                        sum -= nums[i-1];
                        i++;
                    }
                    ps[nums[j-1]] = j;
                    sum += nums[j-1];
                }
            }
            else {
                ps[nums[j-1]] = j;
                sum += nums[j-1];
            }
            j++;
        }
        return ans;  
    }
};