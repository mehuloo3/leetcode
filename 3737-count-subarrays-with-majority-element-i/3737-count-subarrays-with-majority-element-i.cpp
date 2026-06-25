class Solution {
public:

    int countMajoritySubarrays(vector<int>& nums, int target) {
    //TLE
//    int n=nums.size();
//    int x=0;
//    for(int i=0;i<n;i++)
//    {
//        vector<int>v;
//        for(int j=i;j<n;j++)
//        {
//            v.push_back(nums[j]);
//            int c=0;
//           for(auto p:v)
//           {
//               if(p==target)
//               {
//                    c++;
//               }
//           }
//           if(2*c>v.size())
//           {
//               x++;
//           }
//        }
//    }
//    return x;


   //
   int n=nums.size();
   int p=0;
   for(int i=0;i<n;i++)
   {
       int cnt=0;
       for(int j=i;j<n;j++)
       {
           int c=0;
          if(nums[j]==target)
          {
              c++;
          }else
          {
              c--;
          }
          cnt+=c;
          if(cnt>0)
          {
              p++;
          }
       }
   }
   return p;
    }
}; 