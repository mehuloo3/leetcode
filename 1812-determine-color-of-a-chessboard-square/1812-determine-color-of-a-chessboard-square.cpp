class Solution {
public:
    bool squareIsWhite(string coordinates) {
          int a=coordinates[0];
          int b=coordinates[1];
        
        if(a%2==0)
        {
            if(b%2!=0)
              return true;
        }
        else if(a%2!=0)
        {
            if(b%2==0)
                 return true;
        }
        return false;
    }
};