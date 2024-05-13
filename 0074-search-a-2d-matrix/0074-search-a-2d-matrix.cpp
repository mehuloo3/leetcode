class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        //first sol
        int start=0;
        int end=n*m-1;
        while(start<=end)
        {
             int mid=start+(end-start)/2;
             int r=mid/m;
             int c=mid%m;
                    if(matrix[r][c]==target)
                        return true;
                    else if(matrix[r][c]<target)
                        start=mid+1;
                    else
                        end=mid-1;
        }
        //second sol
        // for(int i=0;i<n;i++)
        // {
        //     if(matrix[i][0]<=target && matrix[i][m-1]>=target){
        //         int start=0,end=m-1;
        //         while(start<=end)
        //         {
        //             int mid=start+(end-start)/2;
        //             if(matrix[i][mid]==target)
        //                 return true;
        //             else if(matrix[i][mid]<target)
        //                 start=mid+1;
        //             else
        //                 end=mid-1;
                
        //         }
                   
        
        //     }
        // }
        return false;   
    }     
};