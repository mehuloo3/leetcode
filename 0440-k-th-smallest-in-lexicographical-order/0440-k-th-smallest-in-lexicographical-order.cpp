class Solution {
public:
// void dfs(int temp, int n, vector<int> &ans){
// if(temp>n)
// {
//     return;
// }
// ans.push_back(temp);
// dfs(temp*10,n,ans);
// if(temp % 10 != 9)
// {
//     dfs(temp + 1, n, ans);
// }
// }
    
int count(int n, long long curr, long long next) {
        int steps = 0;
        while (curr <= n) {
            // steps =steps +min(n + 1, next) - curr;
            steps += min((long long)(n + 1), next) - curr;

            curr *= 10;
            next *= 10;
        }
        return steps;
    }

    int findKthNumber(int n, int k) {
        
        int curr = 1;
        k--;
        
        while (k > 0) {
            int steps = count(n, curr, curr + 1);
            if (steps <= k) {
                curr++;
                k -= steps;
            } else {
                curr *= 10;
                k--;
            }
        }
        
        return curr;
        
    }
};