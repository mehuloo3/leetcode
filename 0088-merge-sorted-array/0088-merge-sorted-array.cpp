class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int i=0,j=0,k=0;
        // int nums3[200]={0};
        // while(i<m && j<n)
        // {
        //     if(nums1[i]<nums2[j]){
        //     nums3[k]=nums1[i];
        //     k++;
        //     i++;}
        //     else
        //     {
        //         nums3[k]=nums2[j];
        //         k++;
        //         j++;
        //     }
        // }
        // while(i<m)
        // {
        //     nums3[k]=nums1[i];
        //     i++;
        //     k++;
        // }
        //  while(j<n)
        // {
        //     nums3[k]=nums2[j];
        //     k++;
        //     j++;
        // }
        //  for (int x = 0; x < m + n; x++) {
        //     nums1[x] = nums3[x];
        // }
        // for (int x = 0; x < m + n; x++) {
        //     cout << nums3[x] << " ";
        // }

        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};