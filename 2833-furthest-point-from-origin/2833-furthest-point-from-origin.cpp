class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
    int n=moves.size();
    int l=0,r=0;
     for(int i=0;i<n;i++)
     {
      if(moves[i]=='L')
      {
        l++;;
      }else if(moves[i]=='R')
      {
        r++;
      }
     }

     for(int i=0;i<n;i++)
     {
        if(l>r)
        {
            if(moves[i]=='_')
            {
                moves[i]='L';
            }
        }else if(r>l)
        {
         if(moves[i]=='_')
            {
                moves[i]='R';
            }   
        }else if(l==r && moves[0]=='L')
        {
            if(moves[i]=='_')
            {
               moves[i]='L';
            }
        }else if(l==r)
        {
            if(moves[i]=='_')
            {
                moves[i]='R';
            }
        }
     }   
     int ans=0;

     for(int i=0;i<n;i++)
     {
        if(moves[i]=='L')
        {
            ans--;
        }else
        {
            ans++;
        }
     }
     return abs(ans);
    }
};