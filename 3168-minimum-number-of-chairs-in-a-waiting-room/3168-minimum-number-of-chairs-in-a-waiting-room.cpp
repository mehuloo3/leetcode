class Solution {
public:
    int minimumChairs(string s) {
        int chair=0,people=0;
        int maxi=0;
        for(auto i:s)
        {
            if(i=='E')
            {
                chair++;
                maxi=max(maxi,chair);
            }
            else if(i=='L')
            {
                chair--;
            }
        }
        return maxi;
    }
};