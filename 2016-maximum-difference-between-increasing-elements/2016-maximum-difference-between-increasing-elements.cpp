class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       int dist=-1;
       for(int i=0;i<nums.size();i++)
       {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]<nums[j])
            {
                dist=max(dist,abs(nums[i]-nums[j]));
            }
        }
       } 
       return dist;
    }
};