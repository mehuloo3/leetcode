class Solution {
public:
    int findMaxK(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i=0,j=nums.size()-1;
        int res=-1;
        while(i<j)
        {
            if((-1)*nums[i]==nums[j])
            {
                res=nums[j];
                break;
            }else if(abs(nums[i])<nums[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return res;
    }
};