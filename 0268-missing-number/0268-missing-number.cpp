class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int n=nums.size();
     int sum=n*(n+1)/2;
     int s=0;
     int res;
     for(int i=0;i<nums.size();i++)
     {
         s=s+nums[i];
     }

    return sum-s;
    }
};