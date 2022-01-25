class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) return false;
        int i = 0, k = arr.size() - 1;
        while (i+1 < arr.size()-1 and arr[i] < arr[i+1]) i++; 
        while (k-1 > 0 and arr[k] < arr[k-1]) k--; 
        return i == k;
    }
};