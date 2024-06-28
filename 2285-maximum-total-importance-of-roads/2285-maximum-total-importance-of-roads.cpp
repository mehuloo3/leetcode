class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> deg(n,0);
        for(auto it:roads)
        {
            deg[it[0]]+=1;
            deg[it[1]]+=1;
        }
        long long answer=0;
        sort(deg.begin(),deg.end());
        for(int i=0;i<n;i++)
            answer+=deg[i]*(i+1);
        return answer;

    }
};