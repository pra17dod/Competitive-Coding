class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int n = m[0].size() - 1;
        int o = m.size() - 1;
        int i = 0, j = n;
        bool ans = false;
        while (i <= o and i >= 0 and j <= n and j >= 0) {
            // cout << i << " " << j << endl;
            if (m[i][j] == target) {
                ans = true;
                break;
            }
            else if (m[i][j] > target) {
                j--;
            } 
            else i++;
        }
        return ans;
    }
};