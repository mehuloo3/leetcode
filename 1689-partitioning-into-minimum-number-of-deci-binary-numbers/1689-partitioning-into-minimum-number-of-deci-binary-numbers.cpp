class Solution {
public:
    int minPartitions(string n) {
         int m=n.size();
        if(m==1)
        {
            return n[0]-'0';
        }
        vector<int>vc;
       for(int i=0;i<m;i++)
       {
         vc.push_back(n[i]-'0');  
       }
       int maxi=INT_MIN;
       
       for(auto i:vc)
       {
           maxi=max(maxi,i);
       }
       return maxi;
    }
};