class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0,j=i+1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j <=i+k && j < nums.size();j++)
            {
               if(nums[i]==nums[j] && abs(i-j)<=k)
          {
                  return true;
          } 
         }
        }
        return false;
    }
};