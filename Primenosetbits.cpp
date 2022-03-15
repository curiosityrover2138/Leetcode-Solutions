class Solution {
public:
    bool isonebitPrime(int n){ //this function converts the number into binary
        int c=0;
        while(n!=0){
            if(n%2==1){
                c++;
                
            }
            n/=2;
        }
        int a[]={2,3,5,7,11,13,17,19};//checks the bits for prime(less than 20 is sufficient
        //it would not be possible for the given input range to have more than 19 ones
        for(int i=0;i<8;i++){
            if(a[i]==c)
                return true;
        }
        return false;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(isonebitPrime(i)){
                count++;
                                                // this function then calculates the number of numbers having prime number of set bits and returns the count
            }
        }
        return count;
    }
};
