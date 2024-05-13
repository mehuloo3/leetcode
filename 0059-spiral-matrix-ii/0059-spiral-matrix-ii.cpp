class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n));
        int row = arr.size(), col = arr[0].size();
        int top = 0, bottom = row - 1, left = 0, right = col - 1;

        int num = 1; 
        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++)
                arr[top][j] = num++;
            top++;

            for (int i = top; i <= bottom; i++)
                arr[i][right] = num++;
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    arr[bottom][j] = num++;
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    arr[i][left] = num++;
                left++;
            }
        }
        return arr;
    }
};
