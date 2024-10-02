class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0) return 0;
        
        // first pattern
        // int maxleft=0,maxright=0;
        // int maxheight=height[0],index=0,water=0;
        // for(int i=1;i<n;i++)
        // {
        //     if(maxheight<height[i])
        //     {
        //         maxheight=height[i];
        //         index=i;
        //     }
        // }
        // //left part
        // for(int i=0;i<index;i++)
        // {
        //     if(maxleft>height[i])
        //         water+=maxleft-height[i];
        //     else 
        //     maxleft=height[i];
        // }
        //  //right
        //  for(int i=n-1;i>index;i--)
        //  {
        //    if(maxright>height[i])
        //      water+=maxright-height[i];
        //     else 
        //     maxright=height[i];
        //  }
        //  return water;
        
        //second pattern
        
        int l=0,r=height.size()-1;
        int left=height[l];
        int right=height[r];
        int res=0;
        while(l<r)
        {
            if(left<right)
            {
               l++;
               left=max(left,height[l]);
               res+=left-height[l];
            }
            else
            {
                r--;
                right=max(right,height[r]);
                res+=right-height[r];
            }
        }
        return res;
         
    }
};