class Solution {
public:
//      int f(int index,vector<int>& nums, int& k, unordered_map<int,int>& mp,int &n){
//         if(index==n)
//             return 1;
//         int notPick = f(index+1,nums,k,mp,n);
//         int pick = 0;
//         if(!(mp[nums[index]-k] || mp[nums[index]+k])){
//             mp[nums[index]]++;
//             pick = f(index+1,nums,k,mp,n);
//             mp[nums[index]]--;
//         }
//         return pick + notPick;
//     }
    
//     int beautifulSubsets(vector<int>& nums, int k) {
//         int n =nums.size();
//         unordered_map<int,int> mp;
//         return f(0,nums,k,mp,n)-1;
//     }
    int fun(int indx,vector<int>& nums,int &k,unordered_map<int,int>&map,int &n)
    {
        if(indx==n)
            return 1;
        int notget=fun(indx+1,nums,k,map,n);
        int get=0;
        if(!(map[nums[indx]-k] || map[nums[indx]+k]))
        {
            map[nums[indx]]++;
            get=fun(indx+1,nums,k,map,n);
            map[nums[indx]]--;
        }
        return notget+get;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>map;
        return fun(0,nums,k,map,n)-1;
        
//         vector<int>ans;
//         int count=0;
//         for(int i=1;i<=nums.size();i++)
//         {
//            // if(abs(nums[i]-0!=k) 
//            // {
//                ans.push_back(nums[i]);
//            // }
               
//         }
//         for(int i=1;i<=nums.size();i++)
//         {
//            if(abs(nums[i]-nums[i-1])!=k) 
//            {
//                ans.push_back(nums[i]);
//            }
               
//         }
//            for(int i=0;i<ans.size();i++)
//         {
//      count++;
               
//         }
        
//         return count;
    }
};