class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    // vector<int>ans;
    // int n=nums1.size();
    // int c1=0,c2=0;
    // if(n==1)
    // {
    //     return true;
    // }
    // ans.push_back(nums1[0]);
    // for(int i=1;i<n;i++)
    // {
    //     ans.push_back(abs(nums1[i]-nums1[i-1]));
    // }
    // ans.push_back(nums1[n-1]);
    
    // for(auto i:ans)
    // {
    //     if(i%2==0)
    //     {
    //         c1++;
    //     }else
    //     {
    //         c2++;
    //     }
    // }
    // if(c1==n || c2==n)
    // {
    //  return true;
    // }
    // return false;

    int mini=*min_element(nums1.begin(),nums1.end());
    if(mini%2)
    {
        return true;
    }
    for(auto i:nums1)
    {
        if(i%2)
        {
            return false;
        }
    }
    return true;
    }
};