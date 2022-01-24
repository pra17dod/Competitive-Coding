class Solution {
public:
    bool detectCapitalUse(string word) {
        int i = 0, cnt = 0;
        while(i < word.length()) {
            if (isupper(word[i])) cnt++;
            i++;
        }
        if (cnt == 0) return true;
        if (cnt == 1 and isupper(word[0])) return true;
        if (cnt == word.size())  return true;
        
        return false;
    }
};