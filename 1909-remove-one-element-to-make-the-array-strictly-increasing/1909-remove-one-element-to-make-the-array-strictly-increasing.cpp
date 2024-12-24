class Solution {
public:
    bool check(vector<int>&nums)
    {
         int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>=nums[i])
            {
                return false;
            }
           
        }
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        
       for(int i=0;i<nums.size();i++)
       {
           vector<int>res=nums;
           res.erase(res.begin()+i);
           if(check(res))
           {
               return true;
           }
       }
        return false;
    }
};