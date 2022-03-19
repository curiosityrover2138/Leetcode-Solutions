class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> ans(nums.begin(),nums.end()); //declare a set and put the nums vector in the set. The set automatically removes the duplicate items 
        return nums.size()>ans.size(); //if the nums size is greater than ans size, this means the array contains duplicate items and hence returns true, else if it does not contain any duplicate items it returns false.
    }
};
