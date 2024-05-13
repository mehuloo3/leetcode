class Solution {
public:
    int titleToNumber(string columnTitle) {
        int p=0;
        int ans=0;
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            char c =columnTitle[i];
            int v=(int)c - 65 + 1;
            ans=ans+v*pow(26,p);
            p++;
        }
        return ans;
        
    }
};