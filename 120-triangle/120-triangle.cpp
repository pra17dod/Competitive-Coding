class Solution {
public:
    void solve (vector<vector<int>>& tri, vector<vector<int>>& res, int lvl) {
        if (lvl < tri.size() - 1) {
            vector <int> tmp;
            for (int i = 0; i <= lvl; i++) {
                tmp.push_back(res[0][i] + tri[lvl+1][i]);
                tmp.push_back(res[0][i] + tri[lvl+1][i+1]);
            }
            res.clear();
            for (int j = 1; j < tmp.size() - 2; j++) {
                tmp[j] = min (tmp[j], tmp[j+1]);
                tmp.erase(tmp.begin() + j + 1);
            }
            res.push_back(tmp);
        }
    }
    
    int minimumTotal(vector<vector<int>>& tri) {
        vector <vector <int>> res;
        res.push_back(tri.front());
        for (int i = 0; i < tri.size() - 1; i++) {
            solve (tri, res, i);
        }        
        return *min_element(res[0].begin(), res[0].end());        
    }
};