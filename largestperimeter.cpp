class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
		sort(nums.begin(), nums.end());    //Sort the vector
        for(int i = nums.size() - 1; i > 1; i--)    //Run a loop from end to begin
            if(nums[i] < nums[i - 1] + nums[i - 2])     //If triangle sum property satisfied
                return nums[i] + nums[i - 1] + nums[i - 2];    //Answer found, bcoz array is already sorted
        return 0;    //return 0 if answer not found yet
    }
};
