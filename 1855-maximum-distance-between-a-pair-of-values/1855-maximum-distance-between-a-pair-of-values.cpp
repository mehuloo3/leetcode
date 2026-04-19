class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
     int i=0;
     int j=0;
     int n=nums1.size();
     int m=nums2.size();
     int dist=0;
     while(i<n && j<m)
     {
        if(nums1[i]<=nums2[j])
        {
          dist=max(dist,abs(i-j));
          j++;
        }else
        {
            i++;
            if(i>j)
            {
                j=i;
            }
        }
     }
     return dist;
    // TLE
    //  int dist=INT_MIN;
    //  int c=0;
    //  for(int i=0;i<n;i++)
    //  {
    //     for(int j=0;j<m;j++)
    //     {
    //         if(i<=j && nums1[i]<=nums2[j])
    //         {
    //             c++;
    //             dist=max(dist,abs(j-i));
    //         }
    //     }
    //  }   
    //  if(c>0)
    //  {
    //     return dist;
    //  }
    //  return 0;



    }
};