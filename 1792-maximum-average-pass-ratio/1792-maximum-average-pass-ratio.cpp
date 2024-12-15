class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,int>>Q;
        int n=classes.size();
       for(int i=0;i<n;i++)
       {
           int x=classes[i][0];
           int y=classes[i][1];
           
           double pass=double(x)/y;
           
           int a=1+x;
           int b=1+y;
           
           double newpass=double(a)/b;
           
           Q.push({newpass-pass,i});
       }
        while(extraStudents--)
        {
            pair<double,int>P=Q.top();
            Q.pop();
            
            int j=P.second;
            classes[j][0]=1+classes[j][0];
            classes[j][1]=1+classes[j][1];
            
            double rat=double(classes[j][0])/classes[j][1];
            
            int n=1+classes[j][0];
            int m=1+classes[j][1];
            
            double z=double(n)/m;
            
            Q.push({z-rat,j});
              
        }
        double sum=0;
        for(int i=0;i<classes.size();i++)
        {
            sum+=double(classes[i][0])/classes[i][1];
        }
        return sum/(double)classes.size();
    }
};