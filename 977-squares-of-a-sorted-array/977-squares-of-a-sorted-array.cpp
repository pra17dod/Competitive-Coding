class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans;
        int i = 0;
        for (i; i < nums.size(); i++) {
            if (nums[i] >= 0) break;
        }
        cout << i;
        int j = i - 1;
        while (j > -1 and i < nums.size()) {
            if (abs(nums[j]) < nums[i]) {
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else {
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
        }
        
        while (j > -1) {
            ans.push_back(nums[j]*nums[j]);
            j--;
        }
        while (i < nums.size()) {
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
        
        return ans;
    }
};