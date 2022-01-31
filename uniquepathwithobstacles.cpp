class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows= obstacleGrid.size();
        int cols= obstacleGrid[0].size();                   
        int dp[rows][cols];				//here we initialise an array with the same dimensions as the obstacle grid
        bool flag= false;				//flag to denote whether the obstacle grid has an obstacle or not
        for(int i=0;i<cols;i++){			// this loop just loops on the columns
            if(flag||obstacleGrid[0][i]==1){
                flag= true;				//when the flag is true, the subsequent cells are also marked 0 as because of the obstacle they cannot be reached as well
                dp[0][i]=0;
            }
            else{
                dp[0][i]=1;                    // else the cells can be reached
            }
            
            
        }
        flag=false;
        for(int i=0;i<rows;i++){                    // this does the same thing on the rows as above
            if(flag||obstacleGrid[i][0]==1) {
                flag=true;
                dp[i][0]=0;
            }
            else dp[i][0]=1;
        }
        for(int i=1;i<rows;i++){			// Now this is the same algorithm as used in unique path 1 where we traverse the grid and add the values in the boxes starting from one and incrementing it for every down and right movement possible 
            for(int j=1;j<cols;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                }
                else dp[i][j]= dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[rows-1][cols-1];		//returning the value at the end index of the array which is equal to the number of paths possible
        
        
    }
};


