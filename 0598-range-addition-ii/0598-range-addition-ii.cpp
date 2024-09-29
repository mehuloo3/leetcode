class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
     int a=m;
     int b=n;
        for(auto x:ops)
        {
     //        if(x[0]<a)
     //        {
     //            a=x[0];
     //        }
     //        if(x[1]<0)
     //        {
     //            b=x[1];
     //        }
            
            a=min(a,x[0]);
            b=min(b,x[1]);
        }
        return (a*b);
        
     
    }
};