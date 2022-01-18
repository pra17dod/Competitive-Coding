class Solution {
public:
    void recCall (vector<int>& cd, int tg, int id, vector <int> vec, vector <vector <int>> &res) {
        if (tg == 0) {
            res.push_back(vec);
            return;
        }
        for (int i = id; i < cd.size(); i++) {
            if (i > id and cd[i] == cd[i-1]) continue;
            if (tg < cd[i]) break;
            vec.push_back(cd[i]);
            recCall (cd, tg - cd[i], i + 1, vec, res);
            vec.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int> candidates, int target) {
        vector <vector < int >> res;
        vector < int > vec;
        sort(candidates.begin(), candidates.end());
        recCall (candidates, target, 0, vec, res);
        return res;
    }
};