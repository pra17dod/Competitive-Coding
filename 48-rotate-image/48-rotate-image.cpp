class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int col = matrix.size() - 1;
        for (int i = 0; i <= col/2; i++) {
            for (int j = i; j < col - i; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[col - j][i];
                matrix[col - j][i] = matrix[col - i][col - j];
                matrix[col - i][col - j] = matrix[j][col - i];
                matrix[j][col - i] = tmp;
            }
        }
    }
};