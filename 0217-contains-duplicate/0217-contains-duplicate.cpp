class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      for(int i=1;i<nums.size();i++)
      {
          if(nums[i]==nums[i-1])
          { return true;}
    //   }
    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //       for(int j=i+1;j<nums.size();j++)
    //       {
    //           if(nums[i]==nums[j])
    //           {
    //               return true;
    //           }
    //       } 
        
    //     }
      }
    return false;
    }
        
};