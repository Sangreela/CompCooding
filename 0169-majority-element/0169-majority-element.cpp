class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
                element = nums[i];
            if(element == nums[i])
                count++;
            else
                count--;

        }
        if(count>0)
        {
            count=0;
            for(int i=0;i<nums.size();i++)
            {
                if(element==nums[i])
                    count++;
            }

        }
        if(count>nums.size()/2)
            return element;
        return -1;
    }
};