class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
     priority_queue<int>Q;
     int ans=0;  
    for(auto i:piles)
    {
        Q.push(i);
    }
    
   while(k--)
  {
       int a=Q.top();
       Q.pop();
       
       Q.push(a-floor(a/2));
  }
while(!Q.empty())
{
    ans+=Q.top();
    Q.pop();
}
        return ans;
        
     
    }
};