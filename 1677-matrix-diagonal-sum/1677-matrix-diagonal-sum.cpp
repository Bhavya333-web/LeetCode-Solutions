class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int sum = 0;
       for (int i = 0, j = 0; i < mat.size(); i++, j++) {
          sum += mat[i][j];
          mat[i][j] = 0;
       }

       for (int j = mat[0].size() - 1, i = 0; j >= 0; j--, i++) {
          sum += mat[i][j];
       }
       return sum;
    }
};