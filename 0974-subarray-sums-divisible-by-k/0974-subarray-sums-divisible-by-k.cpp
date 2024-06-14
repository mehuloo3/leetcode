class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
     int res = 0; 
    int prefix = 0;  
    vector<int> map(k);  // Hash map to count occurrences of each remainder
    map[0] = 1;  
    for (int i = 0; i < nums.size(); i++) {
        prefix = (prefix + nums[i] % k + k) % k;
        res += map[prefix];
        map[prefix]++;
    }
    return res;
        
    }
};