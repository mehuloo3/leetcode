class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int c=0;
        int n=s.size();
        for(char i :s)
        {
            if(i=='(')
            {
                c++;
                if(ans<c)
                {
                    ans=c;
                }
            }else if(i==')')
            {
                c--;
            }
        }
        return ans;
    }
};