class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) 
            {
                mp[nums[i]]++;
            }
        }
        int maxi=0;
        int element=-1;
        for(auto i:mp)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                element=i.first;
            }
            
            if(i.second==maxi and i.first<element)
            {
                element=i.first;
            }
        }
        return element;
    }
};