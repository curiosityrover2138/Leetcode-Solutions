class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> merged; //declaring a vector where we will put our answer
        if(intervals.size()==0){
            return merged;      // handling the base case when the interval is empty
        }
        sort(intervals.begin(),intervals.end());  //we need to sort the intervals to start as it is impossible to merge intervals in an unsorted array
        vector<int> temp= intervals[0];			// Initializing the temporary vector to the first element of the intervals array
        for(auto it:intervals){			//using an iterator, we iterate through the array (remember this line)
            if(it[0]<=temp[1]){			//if the 2nd element of intervals[i] <= the first element of intervals[i+1] the intervals can be merged
                temp[1]= max(it[1],temp[1]);     // thus we choose the maximum value and put it in temp
                
            }
            else{
                merged.push_back(temp);		// if the condition is not satisfied, we just put the element in temp and put the temp inside merged
                temp=it;			// make the value of temp as the iterator
            }
        }
        merged.push_back(temp);
        return merged; 
}
};
