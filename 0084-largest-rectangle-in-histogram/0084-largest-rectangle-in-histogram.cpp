class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
//         stack<int>st;
//         vector<int>right(n);
//         vector<int>left(n);
//         for(int i=0;i<n;i++)
//         {
//             while(!st.empty() and heights[st.top()]>heights[i])
//             {
//                 right[st.top()]=i;
//                 st.pop();
//             }
//             st.push(i);
//         }
//         while(!st.empty())
//         {
//             right[st.top()]=n;
//         }
        
//         for(int i=n-1;i>=0;i--)
//         {
//             while(!st.empty() and heights[st.top()]>heights[i])
//             {
//                 left[st.top()]=i;
//                 st.pop();
//             }
//             st.push(i);
//         }
//         while(!st.empty())
//         {
//             left[st.top()]=-1;
//         }
//         int ans=0;
        
//         for(int i=0;i<n;i++)
//         {
//             ans=max(ans,heights[i]*(right[i]-left[i]-1));
//         }
//         return ans;
        
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
};