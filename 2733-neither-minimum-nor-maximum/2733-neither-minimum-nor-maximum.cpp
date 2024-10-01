class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        if(nums.size()<=2)
        {
            return -1;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(maxi>nums[i])
            {
                maxi=nums[i];
            }
            if(mini<nums[i])
            {
                mini=nums[i];
            }
        }
        
        for(auto i:nums)
        {
           if(i!=mini and i!=maxi)
           {
               return i;
           }
            
        }
        return -1;
    }
};