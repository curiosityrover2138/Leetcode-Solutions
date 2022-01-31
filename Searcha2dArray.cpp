class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(target==matrix[i][0] || target==matrix[i][n-1]){
                return true;
            }
            else if(target>matrix[i][0] && target<matrix[i][n-1]){
                for(int j=1;j<n;j++){
                    if(matrix[i][j]==target){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

