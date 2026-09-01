class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i=0;
        sort(intervals.begin(),intervals.end());
        for(i=0;i<intervals.size()-1;i++){
            if(intervals[i][1]>=intervals[i+1][0])
            {
                int end = max(intervals[i][1],intervals[i+1][1]);
                intervals[i][1] = end;
                intervals.erase(intervals.begin()+i+1);
                i--;
            }
        }
        return intervals;
    }
};