class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans1,ans2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                ans2.push_back(nums[i]);
            }
            else
            {
                ans1.push_back(nums[i]);
            }
        }
        // vector<int>res(nums.size());
        // int i=0;
        // int j=0;
        // int k=0;
        // while(i<res.size())
        // {
        //     if(i%2==0)
        //     {
        //         res[k++]=ans1[i++];
        //     }
        //     else
        //     {
        //         res[k++]=ans2[j++];
        //     }
        // }
        vector<int>res(nums.size());
        int i=0;
        int j=0;
        int k=0;
         while(i<res.size())
        {
          if(i%2==0){
          res[i++]=ans1[j++];
          }
          else
          {
              res[i++]=ans2[k++];
          }
        }
        return res;
    }
};