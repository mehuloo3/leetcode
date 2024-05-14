class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
                priority_queue<pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>,  greater<pair<int, pair<int, int>>>>p;

    int n = heights.size();
    int m = heights[0].size();
    vector<vector<int>> Dist(n, vector<int>(m, INT_MAX));

    p.push({0, {0, 0}});
    Dist[0][0] = 0;

    int destrow[] = {-1, 0, 1, 0};
    int destcol[] = {0, 1, 0, -1};

    while (!p.empty()) {
        auto it = p.top();
        p.pop();
        int diff = it.first;
        int row = it.second.first;
        int col = it.second.second;

        if (row == n - 1 && col == m - 1) {
            return diff;
        }

        for (int i = 0; i < 4; i++) {
            int nrow = row + destrow[i];
            int ncol = col + destcol[i];

            if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m) {
                int X = max(abs(heights[row][col] - heights[nrow][ncol]), diff);
                if (X < Dist[nrow][ncol]) {
                    Dist[nrow][ncol] = X;
                    p.push({X, {nrow, ncol}});
                }
            }
        }
    }
        return 0;
    }
};