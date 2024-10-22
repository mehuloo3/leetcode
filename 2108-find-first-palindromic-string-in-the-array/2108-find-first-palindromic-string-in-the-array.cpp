class Solution {
public:
    bool palindrom(string x)
    {
        int i=0,j=x.size()-1;
        while(i<=j)
        {
            if(x[i]!=x[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string x="";
       for(auto i:words)
       {
           if(palindrom(i))
             return i;
       }
        return "";
    }
};