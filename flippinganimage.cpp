class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<(n+1)/2;j++){
                int temp= image[i][j]^1; //first use bitwise operations to invert a particular number and then store it in the temp
                image[i][j]=image[i][n-j-1]^1; //swap the 1 with 0 and 0 with one
                image[i][n-j-1]=temp; //again use the bubble sort technique to store the whole thing as an inverted array in the same array.
                  
            }
        
        }
        return image;
    }
};
