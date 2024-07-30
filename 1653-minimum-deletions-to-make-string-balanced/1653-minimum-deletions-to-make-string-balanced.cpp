class Solution {
public:
    int minimumDeletions(string s) {
        int count=0,res=0;
        for(char ch : s)
        {
            if(ch=='a')
               res= min(res+1,count);
            else
            count++;
        }
        return res;
    }
};