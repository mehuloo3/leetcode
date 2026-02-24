class Solution {
public:
    bool hasAllCodes(string s, int k) {
          int n=s.size();
        set<string>st;
        for(int i=0;i<=n-k;i++)
        {
            string str="";
            for(int j=i;j<=k+i-1;j++)
            {
                 str+=s[j];
            }
            st.insert(str);
        }
        int m=st.size();
        if(pow(2,k)==m)
        {
            return true;
        }

        return false;
    }
};