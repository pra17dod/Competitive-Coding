class Solution {
    public String longestPalindrome(String s) {
        String ans = "";
        
        for(int i=0;i<s.length();i++){
            int k = i;
            int j = i+1;
            while(k>=0 && j<s.length() && s.charAt(k)==s.charAt(j)){
                k--;
                j++;
            }
            
            if(j-k-1 > ans.length()){
                ans = s.substring(k+1,j);
            }
            
            k = i;
            j = i;
            
            while(k>=0 && j<s.length() && s.charAt(k)==s.charAt(j)){
                k--;
                j++;
            }
            
            if(j-k-1 > ans.length()){
                ans = s.substring(k+1,j);
            }
        }
        
        return ans;
    }
}