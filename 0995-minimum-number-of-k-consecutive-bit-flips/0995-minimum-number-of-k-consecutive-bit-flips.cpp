class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
    int ans = 0;
    int flip= 0;
    for (int i=0;i<nums.size();i++) 
    {
      if(i>=k && nums[i-k]==2)
        flip--;
      if(flip%2==nums[i])
       {
        if(i+k>nums.size())
          return -1;
        ans++;
        flip++;
        nums[i]=2;
      }
    }
    return ans;
    }
};