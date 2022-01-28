//This is done in linear time using Kadane's algorithm. The whole intuition behind kadane's algorithm is that we carry the sum as long as it returns a positive
//value, because as long as it returns a positive value, there is hope of increasing the sum and finding the maximum subarray



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0;		// initializing the sum to be zero
        int maximum= INT_MIN;  // initializing the maximum to be the most minimum integer possible in C++
        for(auto it:nums){		// iterating through the loop
            sum+=it;			// the it is the iterator
            maximum= max(sum, maximum);		// calculating the sum as long as it is in the positive domain
            if(sum<0) sum=0;	// if it is negative, we start from the next element and do it again. TC(O(N))
            
        }
        return maximum;
    }
};
