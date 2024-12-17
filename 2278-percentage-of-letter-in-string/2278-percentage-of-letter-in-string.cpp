class Solution {
public:
    int percentageLetter(string s, char letter) {
      
        double cnt=0;
        for(int i=0;i<s.size();i++)
        {
               if(s[i]==letter)
               {
                cnt++;
               }
        }
        
        double p=floor((cnt/s.length())*100);
        return p;
    }
};