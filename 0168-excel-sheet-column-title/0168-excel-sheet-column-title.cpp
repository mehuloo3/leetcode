class Solution {
public:
    string convertToTitle(int columnNumber) {
       string s="";
       while(columnNumber>0)
        {
            int rem=(columnNumber-1)%26;
            s=char('A'+rem)+s;
            columnNumber=(columnNumber-1)/26;
        }
        return s;
        
    }
};