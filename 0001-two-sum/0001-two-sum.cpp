class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sum;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(sum.find(target-nums[i]) != sum.end())
            {
                return {i, sum[target-nums[i]]};
            }
            else
            {
                sum[nums[i]] = i; 
            }
        }
        return {-1,-1};
    }
};