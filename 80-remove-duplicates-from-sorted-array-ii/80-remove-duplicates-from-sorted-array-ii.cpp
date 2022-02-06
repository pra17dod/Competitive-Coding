class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0, k = 0;
        int cur = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (cur != nums[i]) {
                cnt = 0;
                cur = nums[i];  
                k++;
            }
            else {
                cnt++;
                if (cnt > 1) {
                    nums.erase(nums.begin() + i);
                    i--;
                    cnt--;
                }
                else k++;                
            }            
        }
        return k;
    }
};