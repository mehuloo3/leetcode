class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        bool a=true;
        bool b=true;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]) 
            {
                a=false;
            }
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1]) 
            {
                b=false;
            }
        }
        
        return a||b;
    }
};