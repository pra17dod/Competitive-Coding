class Solution {
public:
    void recCall (int n, int k, int id, vector <int> v, vector <vector <int> > &res) {
        if (k == 0) {
            res.push_back(v);
            return;
        }
        for(int i=id;i<=n;i++){
            v.push_back(i);
            recCall(n, k-1, i+1, v, res);
            v.pop_back();
        }      
    }
    vector<vector<int>> combine(int n, int k) {
        vector <vector <int>> res;
        vector <int> v;
        recCall (n, k, 1, v, res);
        return res;
    }
};