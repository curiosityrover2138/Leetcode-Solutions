int countNegativeNumbers(vector<vector<int>> &mat)
{
    // Write your code here.
  //this is the only solution which doesn't give a tle.
  //here, the one thing that I overlooked in the beginning is that the matrix is sorted. It makes life a lot easier.
    int count=0;
    int rowsize= mat.size();
    int colsize= mat[0].size();
    int i=0,j=colsize-1;
    while(i<rowsize && j>=0){
        if(mat[i][j]<0){
            count+=rowsize-i;
            j--;
        }
        else{
            i++;
        }
    }
    
    return count;
}
