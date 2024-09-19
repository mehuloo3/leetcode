class Solution {
public:
     vector<int> solution(string s) {
        vector<int>ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*') {
                vector<int> left = solution(s.substr(0, i));
                vector<int> right = solution(s.substr(i + 1));
                for (auto  x : left) {
                    for (auto y : right) {
                        if (s[i] == '+') {
                            ans.push_back(x + y);
                        } else if (s[i] == '*') {
                            ans.push_back(x * y);
                        } else {
                            ans.push_back(x - y);
                        }
                    }
                }
            }
        }

        if (ans.empty()) {
            ans.push_back(stoi(s));
        }
        return ans;
    }
    vector<int> diffWaysToCompute(string expression) {
         return solution(expression);

    }
};