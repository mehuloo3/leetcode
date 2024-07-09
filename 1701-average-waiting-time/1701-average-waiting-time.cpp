class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
    double waiting=0;
    double current=0;
    // vector<int>temp;
    for (const vector<int>& temp : customers) {
    // for(int i=0;i<customers.size();i++){
      current=max(current,1.0*temp[0]) +temp[1];
      waiting+=current-temp[0];
    }

    return 1.0*waiting/customers.size();
    }
};