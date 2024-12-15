class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
       int n=events.size();
        int x=events[0][1];
        int y=events[0][0];
        
        for(int i=1;i<n;i++)
        {
           int a=events[i][1]-events[i-1][1];
           if(a>x ||  a==x && events[i][0]<y)
           {
               x=a;
               y=events[i][0];
           }
        }
        return y;
    }
};