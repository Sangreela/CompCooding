class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int element = nums[0];
        int i=0;
        for(i=1;i<nums.size();i++)
        {
            if(count==0)
                element = nums[i];
            if(nums[i]==element)
                count++;
            else
            {
                count--;
            }
        }
        if(count>0)
        {
            count = 0 ;
            for(i=0;i<nums.size();i++)
            {
                if(nums[i]==element)
                    count++;
            }
        }
        if(count>=nums.size()/2)
            return element;
        return -1;
    }
};