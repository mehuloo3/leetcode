class Solution {
public:
    
    int findLengthOfLCIS(vector<int>& nums) {
    
        int cnt=1;
        int maxi=0;
        if(nums.size()<=1) 
        return nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                cnt++;
                // maxi=max(maxi,cnt);
            }
            else 
            {
                cnt=1;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};