class Solution {
public:
    map <string, string> mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string enc = "aaaaaa";
        for (int i = 0; i < longUrl.length(); i++) {
            enc[i%6] = (enc[i%6] + longUrl[i])%126 + 'a';
        }
        mp[enc] = longUrl;
        return enc; 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));