class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            // int mid=start+end/2;
            if(nums[start]==target || nums[end]==target)
            {
                return true;
            }
            else if(nums[start]>target)
            {
                start++;
            }
            else if(nums[start]<target)
               {
                   end--;
               }
               else
               {
                   return false;
               }
                
                
        }
               return false;
    }
};