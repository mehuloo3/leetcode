class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
         long long ans=0;
        vector<long long>pre(points[0].size(),0);
        for(int i=0;i<points[0].size();i++)pre[i]=points[0][i];
        vector<long long>curr(points[0].size(),0);
        for(int i=1;i<points.size();i++)
        {
            long long temp=0;
            for(int j=0;j<points[0].size();j++)
            {
                temp=max(temp-1,pre[j]);
                curr[j]=temp;
            }
            temp=0;
            for(int j=points[0].size()-1;j>=0;j--)
            {
                temp=max(temp-1,pre[j]);
                curr[j]=max(curr[j],temp)+points[i][j];
            }
            pre=curr;
            // curr.assign(points[0].size(),0);
        }
        return *max_element(pre.begin(),pre.end());
    }
};