class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));

       for (int num = 0, left = 0, right = n - 1, top = 0, bottom = n - 1;  // similar to spiral matrix I we initialize pointers to top, bottom, left and right
            left <= right && top <= bottom;
            ++left, --right, ++top, --bottom) {// apparently you can also declar a loop like this for more than one initializations and more than one criteria

            for (int j = left; j <= right; ++j) {
                matrix[top][j] = ++num;				// again similar to spiral matrix I, we start filling up the matrix using the pointers 
            }
            for (int i = top + 1; i < bottom; ++i) {
                matrix[i][right] = ++num;
            }
            for (int j = right; top < bottom && j >= left; --j) {
                matrix[bottom][j] = ++num;
            }
            for (int i = bottom - 1; left < right && i >= top + 1; --i) {
                matrix[i][left] = ++num;
            }
        }

        return matrix;
    }
};
