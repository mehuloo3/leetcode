class Solution {
public:
    vector<int>t;
    int solve(int i,vector<int>&stones)
    {
        int n=stones.size();
        if(i>=n)
        {
            return  0;
        }
        if(t[i]!=-1)
        {
            return t[i];
        }
        int result=stones[i]-solve(i+1,stones);
        if(i+1<n)
        {
            result=max(result,stones[i]+stones[i+1]-solve(i+2,stones));
        }
        if(i+2<n)
        {
            result=max(result,stones[i]+stones[i+1]+stones[i+2]-solve(i+3,stones));
        }
        return t[i]=result;  
    }
    string stoneGameIII(vector<int>& stoneValue) {
      int n=stoneValue.size();
      t.resize(n+1,-1);
      int diff=solve(0,stoneValue);
      if(diff<0)
      {
        return "Bob";
      } else if(diff>0)
      {
        return "Alice";
      }
      return "Tie";
    }
};