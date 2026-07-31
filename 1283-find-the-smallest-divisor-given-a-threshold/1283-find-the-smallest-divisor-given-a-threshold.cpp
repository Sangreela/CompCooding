class Solution {
public:
    int sum(vector<int>& nums, int n)
    {
        int total=0;
        for(int i:nums)
        {
            total += (i+n-1)/n;
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = low+(high-low)/2;
            if(sum(nums, mid)>threshold)
                low = mid+1;
            else
                high = mid-1;
        }
        return low;
    }
};