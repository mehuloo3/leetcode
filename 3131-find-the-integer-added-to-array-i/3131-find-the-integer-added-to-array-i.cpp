class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
     int n=nums1.size();
     int m=nums2.size();
//      int sum1=0,sum2=0;
    
//         for(int i=0;i<n;i++)
//         {
//             sum1=sum1+nums1[i];
//         }
//         for(int i=0;i<m;i++)
//         {
//             sum2=sum2+nums2[i];
//         }
//         int a=sum2-sum1;
        
//         return a/n;
        
        // also use the min 
        
        int min1=nums1[0],min2=nums2[0];
        for(int i=0;i<n;i++)
        {
            if(min1<nums1[i])
            {
                min1=nums1[i];
            }
        }
         for(int i=0;i<m;i++)
        {
            if(min2<nums2[i])
            {
                min2=nums2[i];
            }
        }
        return min2-min1;
    }
};