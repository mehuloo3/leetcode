class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        int sum=0,a,b;
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    a=i;
                    b=j;
                    sum=sum+abs(a-b);
                }
                
                 // sum=sum+abs(a-b);
            }
        }
        return sum;
    }
};