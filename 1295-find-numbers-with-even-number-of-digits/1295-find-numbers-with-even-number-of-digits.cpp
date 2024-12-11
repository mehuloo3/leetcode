class Solution {
public:
    int count(int n)
    {
        int cnt=0;
        string x=to_string(n);
        for(int i=0;i<x.size();i++)
        {
            cnt++;
        }
        return cnt;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count(nums[i])%2==0) cnt++;
        }
        return cnt;
    }
};