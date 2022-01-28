class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int m = matrix.size(), n = m ? matrix[0].size() : 0 // using ternary operator to eliminate the case of only 1 column, u = 0, d = m - 1, l = 0, r = n - 1, p = 0; // we create 4 pointers, up down, left and right
        vector<int> order(m * n);     // initializing a vector of order m*n
        while (u <= d && l <= r) {
            for (int col = l; col <= r; col++) {
                order[p++] = matrix[u][col];       // traversing the matrix from left to right
            }
            if (++u > d) {   //end of row
                break;
            }
            for (int row = u; row <= d; row++) {
                order[p++] = matrix[row][r];
            }
            if (--r < l) {    // end of column in reverse traversal
                break;
            }
            for (int col = r; col >= l; col--) {
                order[p++] = matrix[d][col];
            }
            if (--d < u) {   // end of row in reverse traversal
                break;
            }
            for (int row = d; row >= u; row--) {
                order[p++] = matrix[row][l];
            }
            if (l++ > r) { // end of column 
                break;
            }
        }
        return order;
    }
};

