class Solution {
public:
    int thirdMax(vector<int>& nums) {
//          int ans;
//          sort(nums.begin(),nums.end());
//          nums.erase(unique(nums.begin(),nums.end()),nums.end());
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums.size()==2) return ans=nums[nums.size()-1];
//             else if(nums.size()==3)
//             ans=nums[0];
//             else if(nums.size()>3)
//             {
//                 ans=nums[i];
//             }
//         }
//         return ans;
        
        sort(nums.begin(),nums.end());
        int temp = nums[nums.size()-1];
        int count = 1;
        for(int i=nums.size()-2;i>=0;i--){
            if(temp>nums[i]){
                count++;
                temp = nums[i];
            }
            if(count==3)
                return temp;
        }
        return nums[nums.size()-1];
        // int second=INT_MIN;
        // int third;
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int first=INT_MIN;
        // for(int i=0;i<n;i++)
        // {
        //     if(first<nums[i])
        //     {
        //       first=nums[i];
        //     }
        // }
        //  for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=first)
        //     {
        //       second=max(nums[i],second);
        //     }
        // }
        //   for(int i=0;i<n;i++)
        // {
        //     if(nums[i]!=first && nums[i]!=second)
        //     {
        //       third=max(second,nums[i]);            }
        // }
        // return third;
        
    }
};