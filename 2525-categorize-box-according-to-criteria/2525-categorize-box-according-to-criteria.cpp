class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
         bool bulky=((long long)length*width*height)>=1e9||(length>=1e4) || (width>=1e4)||(height>=1e4);
        bool Heavy=mass>=100;
        if(bulky && Heavy)
        {
            return "Both";
        }
        else if(!bulky && !Heavy)
        {
            return "Neither";
        }
        else if(bulky && !Heavy)
        {
            return "Bulky";
        }
        else
        {
            return "Heavy";
        }
            
    }
};