class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i]+mat[i][n-i-1]; //the sum required is that of both diagonals.
            
        }
        if(n%2)sum-=mat[n/2][n/2];//if the matrix is even sized, the middle element will be counted twice by this method. Hence we correct that by removing it once.
        return sum;
    }
};
