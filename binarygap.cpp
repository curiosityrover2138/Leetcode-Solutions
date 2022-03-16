class Solution {
public:
    int binaryGap(int n) {
        int res=0;
        int check=0;
        int cur=0;
        for(int i=0;i<log2(n)+1;i++){
            if(check==0){
                check=((n>>i)%2==0)?0:1;
                
            }
            else{
                if((n>>i)%2==1){
                    res=max(res,cur+1);
                    cur=0;
                }
                else{
                    cur++;
                }
            }
        }
        return res;
    }
};
