class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
    vector<int> f(26,0);
        for(char c:letters) f[c-'a']++;
        int n = words.size();
        int ans = 0;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> req(26,0);
            for(int j=0;j<n;j++)
            {
                if(i>>j & 1) for(char c:words[j]) req[c-'a']++;
            }
            bool possible = true;
            int sc = 0;
            for(int k=0;k<26;k++)
            {
                sc += score[k]*req[k];
                if(f[k]<req[k]) possible = false;
            }
            if(possible) ans = max(ans,sc);
        }
        return ans;
    }
};