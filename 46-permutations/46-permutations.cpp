class Solution {
private:
    void recCall (vector<int> &n, vector <int> &vis, vector <int> &tmp, vector <vector <int>> &res) {
        if (tmp.size() == n.size()) {
            res.push_back(tmp);
            return;
        }
        for (int i = 0; i < n.size(); i++) {
            if (vis[i] == 1) continue;
            vis[i] = 1;
            tmp.push_back(n[i]);
            recCall (n, vis, tmp, res);
            tmp.pop_back();
            vis[i] = 0;
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& n) {
        vector <vector <int> > res;
        vector <int> tmp;
        vector <int> vis (n.size(), 0);
        recCall (n, vis, tmp, res);
        return res;
    }
};