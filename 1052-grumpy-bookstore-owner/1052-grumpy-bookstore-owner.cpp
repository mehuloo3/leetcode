class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int sat=0;
    int m= 0;
    int w= 0;

    for (int i=0;i<customers.size();i++) {
      if (grumpy[i] == 0)
        sat+=customers[i];
      else
        w+=customers[i];
      if (i>=minutes && grumpy[i-minutes]==1)
        w-= customers[i-minutes];
      m=max(m,w);
    }

    return sat+m;
    }
};