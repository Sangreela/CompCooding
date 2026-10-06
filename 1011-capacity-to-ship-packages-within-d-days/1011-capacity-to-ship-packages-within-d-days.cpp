#include <algorithm>
#include <numeric>
class Solution {
public:
    bool possible(vector<int>weights,int min,int days)
    {
        int count=1;
        long long sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum += weights[i];
            if(sum>min)
            {
                sum=weights[i];
                count++;
            }
            if(count>days)
                break;
        }
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(), weights.end(), 0);
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(!possible(weights,mid,days))
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};