class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size(), col=mat[0].size(), res=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]){
                    //if flag is true by end of below two traverse of row and col, current position is special
                    int flg=true;
                    //check if there's 1 on current row except r==i
                    for(int r=0;r<row;r++){
                        if(r==i)
                            continue;
                        if(mat[r][j]){
                            flg=false;
                        }
                    }
                    //check if there's 1 on current col from j+1
                    
                    for(int c=j+1;c<col;c++){
                        if(mat[i][c])
                            flg=false;
                    }
                    
                    res += flg;
                    
                    //once we get 1 on each row, we don't need to travese current row anymore.
                    break;
                }
            }
        }
        
        return res;
    }
};
