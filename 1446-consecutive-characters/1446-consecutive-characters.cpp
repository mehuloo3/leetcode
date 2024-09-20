class Solution {
public:
    int maxPower(string s) {
        int maxi=1;
        int c=1;
        for(int i=1;i<s.size();i++)
        // for(auto i:s)
        {
            if(s[i-1]==s[i])
            // if(i-1==i)
            {
                c++;
            }
            else
                
            {
                c=1;
            }
             maxi=max(maxi,c);
        }
        return maxi;
    }
};