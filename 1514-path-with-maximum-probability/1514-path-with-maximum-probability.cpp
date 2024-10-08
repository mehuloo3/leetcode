// class Solution {
// public:
//     double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        
//     }
// };

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<double,int>> adj[n];
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            double w = (double)succProb[i];
            adj[u].push_back({w,v});
            adj[v].push_back({w,u});
        }
        
        vector<double> prob(n, (double)-1.0);
        priority_queue<pair<double,int>, vector<pair<double,int>>> pq;
        pq.push({1.0,start});
        prob[start] = 1.0;
        
        while(!pq.empty())
        {
            int node = pq.top().second;
            double curr = pq.top().first;
            pq.pop();
            for(int i=0;i<adj[node].size();i++)
            {
                pair<double,int> p = adj[node][i];
                double cost = p.first;
                int child = p.second;
                double pathprob = (double)curr*(double)cost;
                if(pathprob>prob[child]) 
                {
                    prob[child] = pathprob;
                    pq.push({pathprob, child});
                }
            }
        }
        
        if(prob[end]==-1.0) return 0.00000;
        else return prob[end];
        
    }
};