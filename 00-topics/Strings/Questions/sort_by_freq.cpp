// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
    
public:
    static bool cmp(pair<char, int> &a, pair<char, int> &b) {
    return a.second > b.second;
}
  
public:
    string mapSort(map<char, int>& M)
{
    vector<pair<char, int>> A;

    for (auto& it : M) {
        A.push_back(it);
    }
  
    sort(A.begin(), A.end(), cmp);
    string g = "";
    for (auto& m : A) {
            int i = 1;
            while(i <= m.second) {
                i++;
                g += m.first;
            }
    }
    return g;
}
    
public:
    string frequencySort(string s) {
        map <char, int> mp;
        for (auto& i : s) {
            mp[i]++;
        }
        string g = mapSort(mp);
        
        return g;
    }
};