class Solution {
public:
    int minimumChairs(string s) {
        int p=0,c=0;
        int maxi=INT_MIN;
        for(auto i:s)
        {
            if(i=='E') 
            {
                c++;
                maxi=max(maxi,c);
                
            }
            else if(i=='L')
            {
                c--;
            }
              
        }
        return maxi;
    }
};