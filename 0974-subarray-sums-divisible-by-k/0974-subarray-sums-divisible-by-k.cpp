class Solution {
public:
    
    int subarraysDivByK(vector<int>& nums, int k) {
    int res=0; 
    int pre=0;  
    vector<int>map(k);
    map[0]=1;  
    for (int i=0;i<nums.size();i++)
    {
        pre=(pre+nums[i]%k+k)%k;
        res+=map[pre];
        map[pre]++;
    }
    return res;
    }
};