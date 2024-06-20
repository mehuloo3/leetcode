class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    // sort(nums1.begin(),nums1.begin());
    // sort(nums2.begin(),nums2.begin());
    // int m=nums1.size();
    // int n=nums2.size();
    // int i=0,j=0;
    // vector<int>ans;
    // while(i<m && j<n)
    // {
    //    if(nums1[i]==nums2[j]){
    //         ans.push_back(nums1[i]);
    //         i++;
    //         j++;
    //     }
    //     else if(nums1[i]<nums2[j])
    //     {
    //         i++;
    //     }else
    //     {
    //         j++;
    //     }
    // }
    //     return ans;
        
//     vector<int> v;
//       for(int i=0;i<nums1.size();i++)
//       {
//           for(int j=0;j<nums2.size();j++)
//           {
//               if(nums1[i]==nums2[j])
//               {
//                 v.push_back(nums1[i]);
//               }
//               else if(nums1[i]<nums2[j]) {
//                   i++;
//               }
//               else 
//                   j++;

//           }
//       }
//     return v;
        sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    int n1 = nums1.size();
    int n2 = nums2.size();
    int i=0;
    int j=0;
    
    vector<int>ans;

    while(i<n1 && j<n2){
        if(nums1[i] > nums2[j])
            j++;
        else if(nums1[i] < nums2[j]) 
            i++;
        else
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
    }
};