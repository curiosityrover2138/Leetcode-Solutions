vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> v(n);
    for(int i=0;i<n;i++){
        v[i].resize(i+1); //resizing vector as per generated triangle
        v[i][0]=1;
        v[i][i]=1; //first and last element will always be 1
        for(int j=1;j<i;j++){
            v[i][j]= v[i-1][j-1] + v[i-1][j]; //simply adding the previous two values
        }
        
    }
    return v;
}
