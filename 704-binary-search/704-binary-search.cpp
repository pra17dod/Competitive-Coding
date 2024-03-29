class Solution {
public:
    int bs(vector<int>& nums, int target, int low, int high) {
        if (low <= high) {
            int mid = (low + high)/2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                return bs(nums, target, low, mid-1);
            }
            else return bs(nums, target, mid+1, high);
        }
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        return bs(nums, target, 0, nums.size() -1);
    }
};