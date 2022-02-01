class Solution {
public:
    void recCall (string s, int id, vector <char> v, vector <string> &res) {
        while (id < s.size() and isdigit(s[id])) {
            v.push_back(s[id]);
            id++;
        }
         if (id == s.size()) {
            string t = "";
            for (auto &i : v) {
                t += i;
            }
            res.push_back(t);
            return;
        }
        v.push_back(toupper(s[id]));
        recCall (s, id + 1, v, res);
        v.pop_back();
        v.push_back(tolower(s[id]));
        recCall (s, id + 1, v, res);        
    }
    
    vector<string> letterCasePermutation(string s) {
        vector <string> res;
        vector <char> v;
        recCall (s, 0, v, res);
        return res;
    }
};