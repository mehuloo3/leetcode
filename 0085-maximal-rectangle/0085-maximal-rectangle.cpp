class Solution {
public:
     int Area(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        stack<int>st;
        int indx;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and heights[st.top()]>heights[i])
            {
                indx=st.top();
                st.pop();
                if(!st.empty())
                {
                    ans=max(ans,heights[indx]*(i-st.top()-1));
                }
                else
                {
                    ans=max(ans,heights[indx]*i);
                }
            }
            st.push(i);
        }
        while(!st.empty())
        {
            indx=st.top();
            st.pop();
            if(!st.empty())
            {
                ans=max(ans,heights[indx]*(n-st.top()-1));
            }
            else
            {
                ans=max(ans,heights[indx]*(n));
            }
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int ans=0;
        vector<int>heights(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]=='0')
                {
                  heights[j]=0;
                }else
                {
                  heights[j]++;
                }
            }
            ans=max(ans,Area(heights));
        }
    return ans;
    }
};