class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        set<vector<int>>a;
        int target=0;
        for(int i=0;i<nums.size();i++)
        {
                int j=i+1;
                int k=nums.size()-1;
               while(j<k)
               {
                   int sum=nums[i]+nums[j]+nums[k];
                   if(sum==target)
                   {
                      a.insert({nums[i],nums[j],nums[k]});
                       j++;
                       k--;
                   }
                   else if(target>sum)
                   {
                       j++;
                   }
                   else { k--;}
               }
            }
             for(auto x:a)
                 res.push_back(x);
            return res;
        }
       
};