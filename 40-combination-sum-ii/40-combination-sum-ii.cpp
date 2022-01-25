class Solution {
public:
    void recCall(vector<int>& cd, int tg, int id, vector <int> tmp, vector <vector <int>> &res) {
        if (tg == 0) {
            res.push_back(tmp);
            return;
        }
        for (int i = id; i < cd.size(); i++) {
            if (i > id and cd[i] == cd[i-1]) continue;
            if (tg < cd[i]) break;
            tmp.push_back(cd[i]);
            recCall (cd, tg - cd[i], i+1, tmp, res);
            tmp.pop_back();
        }        
    }
    vector<vector<int>> combinationSum2(vector<int>& cd, int tg) {
        vector <vector <int>> res;
        vector <int> tmp;
        sort(cd.begin(), cd.end());
        recCall(cd, tg, 0, tmp, res);
        return res;
    }
};