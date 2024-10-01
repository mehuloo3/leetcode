class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
            int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                   if(abs(nums[i]-nums[j]) ==diff and abs(nums[j]-nums[k])==diff)
                   {
                       cnt++;
                   }
                }
            }
        }
        return cnt;
    }
};