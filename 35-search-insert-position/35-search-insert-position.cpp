class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            int mid = (low + high)/2;
            
            if (nums[mid] >= target) {
                if (mid == 0 or nums[mid - 1] < target)   
                    return mid;
                else 
                    high = mid - 1;
            }
            
            else if (mid == nums.size() - 1 and nums[mid] < target)
                return mid + 1;
            
            else low = mid + 1;
        }
        return -1;
    }
};