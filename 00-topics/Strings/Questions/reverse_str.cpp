//https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        // left trim
        while (s[0] == ' ')
            s = s.substr(1, s.length());
        
        //right trim
        while (s[s.length()-1] == ' ')
            s = s.substr(0, s.length()-1);
        
        //middle trim
        string k = "";
        int i = 0;
        while (i < s.length()) {
            if (s[i] == ' ' and s[i+1] == ' '){
               i++;
                continue;
            }
            else k += s[i];
            i++;
        }
        s = k;
        
        // main logic
        int st = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                reverse(s.begin()+st,s.begin()+i);
                st = i+1;
            }
        }
        reverse(s.begin()+st,s.end());
        reverse(s.begin(), s.end());
        return s;
    }
};