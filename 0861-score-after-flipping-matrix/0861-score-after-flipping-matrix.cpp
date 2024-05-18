class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        // int i;
        // int grid1[1000];
        // int value;
        // for(i=0;i<grid.size();i++)
        // {
        //     for(int j=0;j<grid[0].size();i++)
        //     {
        //        grid1[i][j]=grid[0][j]
        //     }
        // }
        const int m = grid.size();
        const int n = grid[0].size();
        int ans = m;  

    for (int j = 1; j < n; ++j) {
      int onesCount = 0;
      for (int i = 0; i < m; ++i)
        onesCount += grid[i][j] == grid[i][0];
      ans = ans * 2 + max(onesCount, m - onesCount);
    }

    return ans;
    }
};