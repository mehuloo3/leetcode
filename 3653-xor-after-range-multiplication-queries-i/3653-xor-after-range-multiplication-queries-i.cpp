class Solution {
public:
long long MOD=1000000007;
// int MOD=1000000007;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
      int n=nums.size();
      for(int i=0;i<queries.size();i++)
      {
        int w=queries[i][0];
        int x=queries[i][1];
        int y=queries[i][2];
        int z=queries[i][3];
        int idx=w;
        while(idx<=x)
        {
        //     long long q=((long long)nums[idx]*z);
        //     nums[idx]=(q%MOD);

        nums[idx]=(1LL * nums[idx] * z) % MOD;
            idx+=y;
        }
      }
      int p=0;
      for(auto i:nums)
      {
        p^=i;
      }
return p;
    }
};