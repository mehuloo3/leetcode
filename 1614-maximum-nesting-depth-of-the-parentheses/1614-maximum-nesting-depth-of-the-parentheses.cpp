class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int ans=0;
        for(char i:s)
        {
          if(i=='(')
          {
            c++;
            if(ans<c)
               ans=c; 
               }
            else if(i==')')
            {
                c--;
            }
        }
        return ans;

    }
};