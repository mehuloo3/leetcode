class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int x=0;
        int c=0;
        string y="";
        string z="";
        string k="";
        int ans;
        vector<int>v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>intersection;
        set_intersection(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(), back_inserter(intersection));
    if(intersection.size()>0)
    {
        ans=*min_element(intersection.begin(),intersection.end());
    }
                else
                {
                    int a=*min_element(nums1.begin(),nums1.end());
                    int b=*min_element(nums2.begin(),nums2.end());
                    y=to_string(a)+""+to_string(b);
                    z=to_string(b)+""+to_string(a);
                    if(stoi(y)>stoi(z))
                    {
                        k=z;
                    }else
                    {
                        k=y;
                    }
                }
        if(intersection.size()>0)
        {
            return ans;
        }
        return stoi(k);
    }
};