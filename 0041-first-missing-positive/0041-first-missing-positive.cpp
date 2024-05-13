class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int m=nums[nums.size()-1];
    if(m<=0)
    {
        return 1;
    }

      int  start,end,mid;  
      bool found=0;
          for(int x=1;x<=nums.size();x++)
          {
              start=0,end=nums.size()-1;
               found=0;
              while(start<=end)
              {
              mid=start+(end-start)/2;
              if(nums[mid]==x)
              {
                  found=1;
                  break;
              }
              else if(nums[mid]<x)
              {
                  start=mid+1;
              }
              else
              {
                  end=mid-1;
              }
          }
          if(!found)
          {
              return x;
          }
        
      }
        return nums.size()+1;
    }

};