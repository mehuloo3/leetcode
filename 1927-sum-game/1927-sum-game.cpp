class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int Q1 = 0, Q2 = 0, S1 = 0, S2 = 0;
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?') {
                Q1++;
            } else {
                S1 += num[i] - '0';
            }
        }
        for (int j = n / 2; j < n; j++) {
            if (num[j] == '?') {
                Q2++;
            } else {
                S2 += num[j] - '0';
            }
        }

        // if (abs(2 * (S1 - S2)) == abs(9 * (Q2 - Q1))) {
        //     return false;
        // }
        return (S1-S2)*2!=(Q2-Q1)*9;
        // return true;
    }
};