class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int l = 0;
        int h = matrix[0].size()*matrix.size() - 1;
        int mid;
        while (l <= h) {
            mid = (l + h)/2;
            if (matrix[mid/col][mid%col] == target) {
                return true;
            }
            else if (matrix[mid/col][mid%col] > target) {
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return false;
    }
};