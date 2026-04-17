class Solution {
public:
int reverse(int n)
{
    string s="";
    while(n!=0)
    {
        int x=n%10;
        s+=to_string(x);
        n=n/10;
    }
    return stoi(s);
}
int reverse1(int n)
{
    int add=0;
    while(n!=0)
    {
        add=add*10+n%10;
        n=n/10;
    }
    return add;
}
    int minMirrorPairDistance(vector<int>& nums) {
    int n=nums.size();
    int mini=INT_MAX;
    //TLE
    // int c=0;
    // for(int i=0;i<n;i++)
    // {
    //     int rev=reverse1(nums[i]);
    //     for(int j=i+1;j<n;j++)
    //     {
    //         int comp=nums[j];
    //         if(rev==comp)
    //         {
    //             c++;
    //             mini=min(mini,abs(i-j));
    //         }
    //     }
    // }
    // if(c>=1){
    //     return mini;
    // }
    // return -1;

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(nums[i])!=mp.end())
        {
            mini=min(mini,i-mp[nums[i]]);
        }
        int rev=reverse(nums[i]);
        mp[rev]=i;
    }
    return (mini==INT_MAX)?-1:mini;
    }
};