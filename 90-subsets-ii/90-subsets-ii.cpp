class Solution {
public:
    void recCall (vector <int> &nums, int id, vector <int> temp, vector <vector <int>> &res) {
        if (id == nums.size()) return;
        
        for (int i = id; i < nums.size(); i++) {
            if (i > id and nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            res.push_back(temp);
            recCall (nums, i + 1, temp, res);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector <vector <int>> res = {{}};
        vector <int> temp;
        sort(nums.begin(), nums.end());
        recCall (nums, 0, temp, res);
        return res;
    }
};