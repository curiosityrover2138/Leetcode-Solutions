class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int i=0, n=intervals.size();
        while(i<n && intervals[i][1]<newInterval[0]){             // when there are no overlapping intervals
            result.push_back(intervals[i++]);
        }
        vector<int> mI= newInterval;				// initializing an array of new Intervals
        while(i<n && intervals[i][0]<=newInterval[1]){			
            mI[0]= min(mI[0],intervals[i][0]);			// if there are overlapping intervals, we just append the min of the two elements in the m[0] position and maximum of the two in m[1]
            mI[1]= max(mI[1],intervals[i++][1]);
        }
        result.push_back(mI);
        while(i<n) result.push_back(intervals[i++]);		// for the rest of the elements that are not overlapping
        
        return result;
    }
};
