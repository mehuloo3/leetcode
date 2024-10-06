class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int p=coordinate1[0];
        int q=coordinate1[1];
        int r=coordinate2[0];
        int s=coordinate2[1];
        
        
        return (p+q)%2 == (r+s)%2;
     //    if((p+q)%2==0)
     //    {
     //        if((r+s)%2==0)
     //        {
     //            return true;
     //        }
     //    }
     //   else if((p+q)%2!=0)
     //    {
     //        if((r+s)%2==0)
     //        {
     //            return true;
     //        }
     //    }
     //   else if((p+q)%2!=0)
     //    {
     //        if((r+s)%2!=0)
     //        {
     //            return true;
     //        }
     //    }
     // else  if((p+q)%2==0)
     //    {
     //        if((r+s)%2!=0)
     //        {
     //            return false;
     //        }
     //    }  
     //    return false;
    }
};