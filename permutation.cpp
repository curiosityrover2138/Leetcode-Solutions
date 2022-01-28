class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size()<2){                                 // Base Case 
            return {nums};
        }
        vector<vector<int>> result;               //Initializing a result vector
        for(int i=0; i<nums.size();++i){
            vector<int> v(nums.begin(),nums.end());		//Copy the vector nums in v
            v.erase(v.begin()+i);		//Erase one element in ascending order of the loop so that you can permute the rest of the elements
            auto res= permute(v);	//Recursively calling this permute function for the vector v(where we erase elements one by one, fix some elements and permute the rest
            for(int j=0;j<res.size();j++){ 
                vector<int> _v=res[j];		// for every permutation in res, we create a vector _v and then append the vector in _v
                _v.insert(_v.begin(),nums[i]); 		// we insert the permutations in _v alongwith the erased element which we put in the front.
                result.push_back(_v);		// thus we can obtain the final result which is a vector of vectors
                
            }
        }
        return result;
        
    }
};
