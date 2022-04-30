class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum = 0;
        vector <int> scr;
        for (auto &i : ops) {
            if (i ==  "+") {
                scr.push_back(*(scr.end()-2) + *(scr.end()-1));
                sum += scr.back();
            }
            else if (i ==  "C") {
                sum -= scr.back();
                scr.pop_back();
            }
            else if (i ==  "D") {
                scr.push_back((*(scr.end()-1))*2);
                sum += scr.back();
            }
            else {
                scr.push_back(stoi(i));
                sum += scr.back();
            }
        }
        return sum;
    }
};