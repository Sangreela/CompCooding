class Solution {
public:
bool possible(vector<int>&nums,long long mid,int k)
{
    long long sum=0;
    int count=1;
    for(int i=0;i<nums.size();i++)
    {
        sum += nums[i];
        if(sum>mid)
        {
            count++;
            sum = nums[i];
        }
    }
    return count<=k;
}
    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(),nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0LL);
        while(low<=high)
        {
            long long mid = low+(high-low)/2;
            if(possible(nums,mid,k))
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
};