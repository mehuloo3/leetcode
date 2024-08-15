class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        int cnt=0;
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]<k)
            {
                cnt++;
            }
            i++;
        }
        return cnt;
    
    }
};