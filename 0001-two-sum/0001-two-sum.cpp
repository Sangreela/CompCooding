class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sum;
        for(int i=0;i<nums.size();i++)
        {
            int n = target-nums[i];
            if(sum.find(n)!= sum.end())
            {
                return {i,sum[n]};
            }
            else
                sum[nums[i]] = i;
        }
        return {};
    }
};