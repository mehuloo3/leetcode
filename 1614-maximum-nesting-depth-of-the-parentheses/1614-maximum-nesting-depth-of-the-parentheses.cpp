class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=INT_MIN;
        for(char i:s)
        {
            if(i=='(')
            {
                st.push(i);
                
            }else if(i==')')
            {
                st.pop();
            }
            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};