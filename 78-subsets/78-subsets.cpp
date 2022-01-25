class Solution {
public:
    void recCall (vector <int> &nums, int id, vector <int> temp, vector <vector <int>> & res) {
        if (id == nums.size()) {
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[id]);
        recCall (nums, id+1, temp, res);
        temp.pop_back();
        recCall (nums, id+1, temp, res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> res = {};
        vector <int> temp;
        recCall (nums, 0, temp, res);
        return res;
    }
};