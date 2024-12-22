class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxiZ=0,maxiO=0;
        int c1=0,c2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'){ c1++;}
            else
            {
                maxiO=max(maxiO,c1);
                c1=0;
            }
        }
        maxiO=max(maxiO,c1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'){ c2++;}
            else
            {
                maxiZ=max(maxiZ,c2);
                c2=0;
            }
        }
        maxiZ=max(maxiZ,c2);
        
        if(maxiZ<maxiO)
        {
            return true;
        }
        
        return false;
    }
};