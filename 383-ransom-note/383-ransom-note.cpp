class Solution {
public:
    bool canConstruct(string r, string m) {
        map <char, int> mp;
        for (auto i : m)
            mp[i]++;
        
        for (auto i : r) {
            if (mp[i] > 0)
                mp[i]--;
            else return false;
        }
        
        return true;
    } 
};