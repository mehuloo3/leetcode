class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() && i<=j)
        {
            j=max(j,nums[i]+i);
            i++;
        }
        return i==nums.size();
    }
};