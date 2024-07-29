class Solution {
public:
    int numTeams(vector<int>& rating) {
        int total=0;
        for(int i=0;i<rating.size();i++)
        {
            int a=0,b=0,c=0,d=0;
            for(int j=i+1;j<rating.size();j++)
            {
             if(rating[j]<rating[i]) a++;
             else if(rating[j]>rating[i])
             {
                 b++;
             }
                 
            }
            for(int j=0;j<i;j++)
            {
               if(rating[j]<rating[i]) c++;
               else if(rating[j]>rating[i])
               {
                   d++;
               }
            }
           total+=a*d+b*c; 
        }
        return total;
    }
};