class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX;
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                {
                    return sum;
                }
                else if(abs(sum-target)<abs(ans))
                {
                    ans=sum-target;
                    res=sum;
                }
                else if(target<sum)
                {
                    k--;
                }
                else { j++;}
            }
        }
        return res;       
    }
};