class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        vector <int> pos;
        for (int i = 0; i < f.size(); i++) {
            if (f[i] == 1) {
                pos.push_back(i);
            }
        }
        int ans = 0;
        if (!pos.empty()) {
            if (pos.front() != 0) {
                ans += pos[0]/2;
            } 
            for (int i = 1; i < pos.size(); i++) {
                ans += ((pos[i] - pos[i-1] - 1)%2) + ((pos[i] - pos[i-1] - 1)/2 - 1);
            }
            if (pos.back() != f.size() - 1) {
                ans += (f.size() - 1 - pos.back())/2;
            }
        }
        else ans += f.size()%2 + f.size()/2;
        
        return (ans >= n) ? true : false;
    }
};