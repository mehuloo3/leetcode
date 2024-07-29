class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int total=0;
    for(int i=0;i<n;i++)
    {
        int lmost=0,lleast=0,rmost=0,rleast=0;
        for(int j=i+1;j<n;j++)
        {
            if(rating[j]<rating[i]) lmost++;
            else if(rating[j]>rating[i]) lleast++;
        }
         for(int j=0;j<i;j++)
        {
            if(rating[j]<rating[i]) rmost++;
            else if(rating[j]>rating[i]) rleast++;
        }
        total+=lmost*rleast+lleast*rmost;
    }
        return total;
    }
};