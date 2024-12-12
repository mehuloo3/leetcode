class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       priority_queue<double>Q;
        
      for(auto i:nums)
      {
          Q.push(i);
      }
    double sum=0;
        while(k--)
        {
            double x=Q.top();
            Q.pop();
            double y=ceil(x/3);
            sum+=x;
            Q.push(y);
        }
        
        return sum;
    }
};