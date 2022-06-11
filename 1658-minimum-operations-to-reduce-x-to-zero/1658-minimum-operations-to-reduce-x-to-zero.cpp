class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int size = nums.size();
        
        int totalSum = accumulate(nums.begin(), nums.end(),0);
        if(totalSum == x){
            return size;
        }
        
        int needed = totalSum - x;
        
        int i=0, j=0;
        int maxLen = 0;
        int currSum = 0;
        while(i<size){
            currSum += nums[i];
            
            while(j<i && currSum > needed){// minimize window size
                currSum -= nums[j];
                j++;
            }
            
            if(currSum == needed){
                maxLen = max(maxLen, i-j+1);
            }
            i++;
        }
        
        if(maxLen == 0){
            return -1;
        }
        
        return size - maxLen;
    }
};