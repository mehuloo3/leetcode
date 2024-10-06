class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0,end=n-1;
        int sum=0;
        int mid=start+(end-start)/2;
        for(int i=0;i<nums.size();i++)
        {
              sum+=abs(nums[i]-nums[mid]);
        }
        return sum;
    }
};