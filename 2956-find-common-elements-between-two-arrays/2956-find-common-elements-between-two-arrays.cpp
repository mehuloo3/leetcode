class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size(),m=nums2.size();
        vector<int>ans;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    cnt1++;
                    break;
                    // ans.push_back(cnt1);
                }
            }
        }
        ans.push_back(cnt1);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums2[i]==nums1[j])
                {
                    cnt2++;
                    break;
                    // ans.push_back(cnt2);
                }
            }
        }
        ans.push_back(cnt2);
        return ans;
    }
};