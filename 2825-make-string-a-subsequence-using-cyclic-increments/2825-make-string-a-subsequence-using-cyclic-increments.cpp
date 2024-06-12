class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0,j=0;
        int a=str1.size();
        int b=str2.size();
        while(i<a && j<b)
        {
            if(str1[i]==str2[j])
            {
                j++;
            }
            else
            {
                str1[i]=((str1[i]-'a'+1)%26+'a');
                if(str1[i]==str2[j])
                    j++;
            }
            i++;
        }
        return j==b;
    }
};