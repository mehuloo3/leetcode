class Solution {
public:


vector<vector<int>> modify(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    // Step 1: Find the maximum value for each column (ignoring -1)
    vector<int> columnMax(m, INT_MIN);
    for (int col = 0; col < m; col++) {
        for (int row = 0; row < n; row++) {
            if (matrix[row][col] != -1) {
                columnMax[col] = max(columnMax[col], matrix[row][col]);
            }
        }
    }

    // Step 2: Replace -1 with the maximum value for that column
    for (int col = 0; col < m; col++) {
        for (int row = 0; row < n; row++) {
            if (matrix[row][col] == -1) {
                matrix[row][col] = columnMax[col];
            }
        }
    }

    return matrix;
}

    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
       
       // int n=matrix.size();
       // int m=matrix[0].size();
       // vector<int>res(m,INT_MIN);
       //  for(int i=0;i<m;i++)
       //  {
       //      for(int j=0;j<n;j++)
       //      {
       //            if(matrix[j][i]!=-1)
       //               res[i]=max(res[j],matrix[j][i]);
       //      }
       //  }
       // for(int i=0;i<m;i++)
       //  {
       //      for(int j=0;j<n;j++)
       //      {
       //            if(matrix[j][i]==-1)
       //              matrix[j][i]=res[i];
       //      }
       //  }
        
        return modify(matrix);
    }
};