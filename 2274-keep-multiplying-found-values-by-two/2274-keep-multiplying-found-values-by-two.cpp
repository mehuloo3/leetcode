class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
   int i=0;
   int o=original;
   int n=nums.size();
   sort(nums.begin(),nums.end());
;   while(i<n)
   {
       if(nums[i]==o)
       {
           o=o*2;
       }
       i++;
   }
   return o;

       
    }
};