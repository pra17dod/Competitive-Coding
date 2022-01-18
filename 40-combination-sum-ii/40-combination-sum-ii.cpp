class Solution {
public:
    void recCall (vector<int>& can, int id, int tg, vector <vector <int>> &res, vector <int> vec) {
        if (tg == 0) {
            res.push_back(vec);
            return;            
        }
        for (int i = id; i < can.size(); i++) {
            if (i > id and can[i] == can[i-1]) continue;
            if (tg >= can[i]) {
                vec.push_back(can[i]);
                recCall (can, i + 1, tg - can[i], res, vec);
                vec.pop_back();
            }
            else break;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector <int>> res;
        vector <int> vec;
        sort (candidates.begin(), candidates.end());
        recCall (candidates, 0, target, res, vec);
        return res;
    }
};