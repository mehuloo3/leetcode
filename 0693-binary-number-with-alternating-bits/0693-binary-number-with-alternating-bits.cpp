class Solution {
public:
    bool hasAlternatingBits(int n) {
        string st="";
        int c=0;
        while(n!=0)
        {
            int x=n%2;
            st+='0'+(x);
            n=n/2;
        }
        reverse(st.begin(),st.end());

        for(int i=1;i<st.size();i++)
        {
            if(st[i]==st[i-1])
            {
            c++;
            }
        }
        if(c==0)
        {
            return true;
        }
    return false;
    }
};