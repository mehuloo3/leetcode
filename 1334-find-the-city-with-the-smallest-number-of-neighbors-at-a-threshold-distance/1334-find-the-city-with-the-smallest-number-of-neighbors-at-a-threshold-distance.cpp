class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> distance (n, vector<int>(n, INT_MAX));
        for (int i = 0; i < n; i+=1) distance[i][i] = 0;
        for (auto& e: edges){
            distance[e[0]][e[1]] = e[2];
            distance[e[1]][e[0]] = e[2];
        }
        
        for (int k = 0; k < n; k+=1) {
            for (int i = 0; i < n; i+=1) {
                for (int j = 0; j < n; j+=1){
                    if (distance[i][k] != INT_MAX && distance[k][j] != INT_MAX && (distance[i][j] > distance[i][k] + distance[k][j]))
                        distance[i][j] = distance[i][k] + distance[k][j];
                }
            }
        }
        int node_nei = -1, node = -1;
        for (int i = 0, cnt; i < n; i+=1) {
            cnt = -1;
            for (int j = 0; j < n; j+=1) {
                if (distance[i][j] <= distanceThreshold) cnt += 1;
            }
            if (node_nei == -1 || cnt <= node_nei) node_nei = cnt, node = i;
        }
        return node;
    }
};