class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start=0;
        int curr=0;
        for(int i=0;i<2*gas.size();i++)
        {
            if(i==gas.size()+start)
            {
                return start;
            }
            curr=curr+gas[i%gas.size()]-cost[i%cost.size()];
            
            if(curr<0)
            {
                start=i+1;
                curr=0;
            }
        }
        return -1;
    }
};