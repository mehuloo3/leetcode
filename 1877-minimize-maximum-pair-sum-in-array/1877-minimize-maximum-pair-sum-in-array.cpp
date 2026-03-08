class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        int s=0;
        int maxi=INT_MIN;
        while(i<j)
        {
            s=nums[i]+nums[j];
            maxi=max(s,maxi);
        i++;
        j--;
        }

        return maxi;
    }
};