class Solution {
public:
    int findComplement(int num) {
        vector <int> r;
        int n = num;
        while (num) {
            r.push_back(!(num % 2));
            num /= 2;
        }
        int ans = 0;
        int i = 0;
        for (auto &j : r) {
            ans += j*(pow(2, i));
            i++;
        }
        return ans;
    }
};