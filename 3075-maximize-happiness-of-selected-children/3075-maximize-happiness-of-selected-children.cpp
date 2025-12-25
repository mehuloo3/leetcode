class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {

        //queue
        // long long total=0;
        // priority_queue<int>p(happiness.begin(),happiness.end());
        // int sum=0;
        // for(int i=0;i<k;i++)
        // {
        //     if(p.empty())
        //     {
        //         break;
        //     }
        //     int maxi=p.top();
        //     p.pop();
        //     int d=max(0,maxi-i);
        //     total+=d;
        // }
        // return total;

        //simple
        long long sum=0;
        sort(happiness.rbegin(),happiness.rend());
        for(int i=0;i<happiness.size();i++)
        {
            int v=happiness[i]-i;
            if(v>0 && k>0)
            {
                sum+=v;
                k--;
            }else
            {
                break;
            }
        }
        return sum;
    }
};