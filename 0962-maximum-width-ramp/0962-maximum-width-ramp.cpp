class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        
//         stack<int>st;
//         int n=nums.size();
        
//         for(int i=0;i<n;i++)
//         {
//            if(st.empty() or nums[i]<nums[st.top()])
//            {
//                st.push(i);
//            }
//         }
//         int x=0;
//         for(int j=n-1;j>=0;j--)
//         {
//             if(!st.empty() and nums[j]>=nums[st.top()])
//             {
//                 x=max(x,j-st.top());
//                 st.pop();
//             }
//         }
//         return x;  
        
stack<int> st;
    int n = nums.size();
    
    // Step 1: Build a stack of indices where the values are decreasing
    for (int i = 0; i < n; ++i) {
        if (st.empty() || nums[i] < nums[st.top()]) {
            st.push(i);
        }
    }
    
    int max_width = 0;
    
    // Step 2: Traverse from the end of the array to find maximum width ramp
    for (int j = n - 1; j >= 0; --j) {
        while (!st.empty() && nums[j] >= nums[st.top()]) {
            max_width = max(max_width, j - st.top());
            st.pop();
        }
    }
    
    return max_width;
    }
};