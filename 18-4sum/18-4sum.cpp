class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set <vector <int> > ans;
        int n = nums.size();
        if (n < 4) return {};
        sort(nums.begin(), nums.end());         
        for (int i = 0; i < n-2; i++) {
            for (int j = i+1; j < n-1; j++) {
                int l = j + 1, h = n-1;
                int nt = target - nums[i] - nums[j];
                while (l < n and h >= 0 and l < h) {
                    if (nums[l] + nums[h] < nt) {
                        while (l+1 < n and nums[l+1] == nums[l]) l++;
                        l++;
                    }
                    else if (nums[l] + nums[h] > nt) {
                        while (h-1 > j and nums[h-1] == nums[h]) h--;
                        h--;
                    }
                    else { 
                        ans.insert({nums[i], nums[j], nums[l], nums[h]});
                        l++, h--;
                    }
                }
                while (j+1 < n and nums[j+1] == nums[j]) j++;
            }
            while (i+1 < n and nums[i+1] == nums[i]) i++;
        }
        
        vector <vector <int> > res;
        
        for (auto &i : ans) {
            res.push_back(i);
        }
        
        return res;
    }
};