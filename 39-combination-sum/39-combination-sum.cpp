class Solution {
public:
   
    
    void recCall (int id, int tg, vector <int> vec, vector<int> &c, vector<vector <int>> &res) {
        if (id == c.size()) {
            if (tg == 0) res.push_back(vec);
            return;
        }
        if (tg >= c[id]) {
            vec.push_back(c[id]);
            recCall (id, tg - c[id], vec, c, res);
            vec.pop_back();
        }
        recCall (id+1, tg, vec, c, res);      
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector <int>> res;
        vector <int> vec;
        recCall (0, target, vec, candidates, res);
        return res;
    }
};