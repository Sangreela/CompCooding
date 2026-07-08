class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> n;
        vector <int> ans = {-1,-1};
        for(int i=0;i<nums.size();i++)
        {
            if(n.find(target-nums[i]) != n.end())
                return {i,n[target-nums[i]]};
            n[nums[i]] = i;
        }

        return ans;
    }
};