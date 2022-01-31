class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int dp[m][n];  //Initialize a mxn matrix
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0) dp[i][j]=1;       //initialize the first box to be 1 and for travelling to the rest of the boxes 1 is added for each right or down
						//movement which shows the number of paths added
                else dp[i][j]=dp[i-1][j]+dp[i][j-1];   // then the numbers are filled up in the matrix one by one
            }
        }
        return dp[m-1][n-1];		// as we reach the end of the matrix, we just return the value of the cell at the end of the matrix which becomes our answer
       
    }
};


