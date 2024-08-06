class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int>mp;
        for (char i : word) {
            mp[i]++;
        }
        vector<int>ans;
        for (auto x : mp) {
            ans.push_back(x.second);
        }
        sort(ans.rbegin(),ans.rend());
        int ans1 = 0;
        for (int i = 0; i < ans.size(); ++i) {
            ans1 += ceil((i + 1) / 8.0) * ans[i];
        }
        return ans1;
    }
};