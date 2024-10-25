class Solution {
public:
    int fun(int x)
    {
    int sum=0;
	while(x>0)
	{
      int n=x%10;
      sum+=n;
      x/=10;
    }
        return sum;
    }
    int minElement(vector<int>& nums) {
    vector<int>ans;
    for(int i=0;i<nums.size();i++)
    {
        int z=nums[i];
        ans.push_back(fun(z));
    }
    sort(ans.begin(),ans.end());
        return ans[0];
    }
};