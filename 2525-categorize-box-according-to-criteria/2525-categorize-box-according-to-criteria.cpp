class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long  bulky=((long long)length*width*height)>=1e9||(length>=1e4) || (width>=1e4)||(height>=1e4);
        long long  Heavy=mass>=100;
        bool f=0;
        if(bulky==1 && Heavy==1)
        {
            return "Both";
        }
        else if(bulky==0 && Heavy==0)
        {
            return "Neither";
        }
        else if(bulky==1 && Heavy==0)
        {
            return "Bulky";
        }
        else
        {
            return "Heavy";
        }
            
    }
};