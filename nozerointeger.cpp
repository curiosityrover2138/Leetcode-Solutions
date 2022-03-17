class Solution {
public:
	// function to check if given number contains any zeros
	// if a number at any stage is perfectly divisible by 10. then it contains a zero.
    bool hasZero(int num){
        while(num){
            if(num%10==0) return true;
            num=num/10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        int lo=1,hi=n-1;
        while(lo<=hi){
            if(hasZero(lo)==false and hasZero(hi)==false){
                return {lo,hi};
            }
            lo++;
            hi--;
        }
        return {};
    }
};
