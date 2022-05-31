class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            ans.push_back(nums[i]);
        }
        sort(ans.begin(), ans.end());
        int left = 0, right = n-1;
        while(left <= right)
        {
            if(nums[left] == ans[left])
            {
                left++;
            }
            else if(nums[right] == ans[right])
            {
                right--;
            }
            else
                break;
        }
        return right-left+1;
    }
};