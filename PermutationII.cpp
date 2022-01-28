
class Solution {
public:
    bool noswap(int k, int i, const vector<int> num){  // This means that if the vector has common elements, it will not swap the numbers that are equal
        for (int j=k;j<i;j++){
            if (num[j]==num[i]){
                return true;
            }
        }
        return false;
    }

    void perm(vector<int> num,int k,int n, vector<vector<int> > &res){         // This is similar to permutation I where we recursively call the function and swap the elements that are distinct 
    if (k==n){
            res.push_back(num);
        }else{
            for (int i=k;i<=n;i++){
                
                if (noswap(k,i,num)){continue;}
                
                int tmp = num[k];
                num[k]=num[i];
                num[i]=tmp;
                
                perm(num,k+1,n,res);
                
                tmp = num[k];
                num[k]=num[i];
                num[i]=tmp;
            }
        }
    }
    vector<vector<int> > permuteUnique(vector<int> &num) {
        vector<vector<int> > res;
        perm(num,0,(num.size()-1),res);
        return res;
    }
};
