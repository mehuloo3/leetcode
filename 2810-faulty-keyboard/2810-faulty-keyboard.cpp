class Solution {
public:
    string finalString(string s) {
        string res="";
        string x="";
        for(int i=0;i<s.size();i++)
        {
            //when got the i reverse
//             if(s[i]=='i')
//             {
//                 reverse(res.begin(),res.end());
//             }
//             else
//             {
//                 res+=s[i];
//             }
            
            if(s[i]!='i')
            {
                // reverse(res.begin(),res.end());
                res+=s[i];
            }
            else
            {
                // res+=s[i];
                reverse(res.begin(),res.end());
            }
            
            
            
        }
        return res;
    }
};