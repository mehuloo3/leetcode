class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        bool y=true;
        for(int i=0;i<n;i++)
        {
            x=x^nums[i];
            if(nums[i]!=0) y=false;
        }
        if(y) return 0;
        if(x!=0) return n;
        return n-1;
    }
};