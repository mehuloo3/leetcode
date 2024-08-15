class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int x=INT_MAX;
        int y=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(x>=nums[i])
            {
                x=nums[i];
            }
            else if(y>=nums[i])
            {
                y=nums[i];
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};