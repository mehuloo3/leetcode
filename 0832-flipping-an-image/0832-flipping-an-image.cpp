class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       int row=image.size();
       int col=image[0].size();
        // for(int i=0;i<row;i++)
        // {
        //     int start=0,end=col-1;
        //     while(start<end)
        //     {
        //         swap(image[i][start],image[i][end]);
        //         start++;
        //         end--;
        //     }
        // }
        for(int i=0;i<row;i++)
        {
            reverse(image[i].begin(),image[i].end());
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }
                else
                {
                    image[i][j]=0;
                }
            }
        }
        return image;
    }
};