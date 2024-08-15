class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveCost=0,tenCost=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                fiveCost++;
            }
            else if(bills[i]==10)
            {
                if(fiveCost==0) return 0;
                fiveCost--;
                tenCost++;
            }
            else if(bills[i]==20)
            {
                if(fiveCost>0 && tenCost>0)
                {
                    tenCost--;
                    fiveCost--;
                }
                else if(fiveCost>=3)
                {
                    fiveCost-=3;
                }
                else
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};