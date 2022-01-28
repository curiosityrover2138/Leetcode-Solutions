class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);  //this is how you transpose the matrix as ith element becomes jth element and jth element becomes ith(for row and column). Super simple approach
            }
        }
        for(int i=0; i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
