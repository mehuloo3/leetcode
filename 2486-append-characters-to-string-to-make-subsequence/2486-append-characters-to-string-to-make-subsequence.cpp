class Solution {
public:
    int appendCharacters(string s, string t) {
        int m=t.size();
        int n=s.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(t[j]==s[i])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return m-j;
       
    }
};