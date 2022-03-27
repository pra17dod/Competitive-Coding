class Solution {
public:
    static bool cmp(pair<int, int> &a, pair <int, int> &b) {
        if (a.first == b.first)
            return a.second < b.second;
        else return a.first < b.first;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <pair <int, int>> v;
        for (int i = 0; i < mat.size(); i++) {
            v.push_back({accumulate(mat[i].begin(), mat[i].end(), 0), i});
        }
        sort (v.begin(), v.end(), cmp);
        vector <int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};