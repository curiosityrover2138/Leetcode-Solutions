class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        pair<int,int> interval{0,0};  // We create a pair for marking the intervals which can be traversed
        int n= nums.size();
        if(n<=1){ 			// Base case as for 1 or empty array, we are already at the end
            return true;
        }
        int myposition=0;			//starting from index 0
        while(true){			// As long as we can run in the loop we will run in the loop
            int canreach=-1;		// Initially we cannot reach anywhere
            for(int i=interval.first;i<=interval.second;i++){		// it will start from 0,0 and then we will update the interval as the value of the first element
											// is added to the interval
                canreach=max(canreach,i+nums[i]);		// for eg, if the value is negative we will return false as there is no way the array can be traversed
                
            }
            if(canreach>=n-1){			// if canreach exceeds the last element(for eg the second element can be 10 in a 3 digit array) we return true
                return true;
            }
            interval= {interval.second+1,canreach};		//Update the interval from second to the maximum reach of the element in the array
            if(interval.first>interval.second){			// again, a check for negative numbers(eg [1,-3,10] we can never reach the last element as interval.first will be greater than interval.second in the 2nd iteration
                return false;
                
            }
            
        }
        assert(false);		// If the function doesn't return anything, false is the default output
        
        
        
    }
};

