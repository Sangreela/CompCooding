class Solution {
public:
    bool possible(int n, vector<int>& weights, int days)
    {
        int sum=0,count=1;
        for(int i:weights)
        {
            if(sum+i>n)
            {
                sum = i;
                count++;
            }
            else
                sum += i;
            if(count>days)
                return false;
        }
        return count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(!possible(mid,weights,days))
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};