class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        map<vector<int>,int>mp;
        int x=0,y=0,k=0;
        int ans=0;
        for(auto i:obstacles)
        {
            mp[i]++;
        }
        vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        for(auto i:commands)
        {
            if(i==-1)
            {
                k=(k+1)%4;
            }else if(i==-2)
            {
                k=(k+3)%4;
            }else
            {
              for(int j=0;j<i;j++)
              {
                int x_new=x+dir[k][0];
                int y_new=y+dir[k][1];

                if(mp.count({x_new,y_new}))
                {
                    break;
                }
                x=x_new;
                y=y_new;
                ans=max(ans,x*x+y*y);
              }
            }
        }
    return ans;
    }
};