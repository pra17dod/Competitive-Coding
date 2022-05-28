class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector <int> vis(nums.size()+1, 0);
        for (auto &i : nums) {
            vis[i] = 1;
        }
        return distance(vis.begin() , find(vis.begin(), vis.end(), 0));
    }
};