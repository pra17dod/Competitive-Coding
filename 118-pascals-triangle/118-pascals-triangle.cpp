class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int>> ans;
        ans.push_back({1});
        for (int i = 1; i < numRows; i++) {
            ans.push_back(vector <int> (i+1, 1));
            int k = 0;
            for (int j = 1; j < ans[i].size() - 1; j++) {
                ans[i][j] = ans[i-1][k] + ans[i-1][k+1];
                k++;
            }
        }
        return ans;
    } 
};