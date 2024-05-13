class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       sort(tokens.begin(),tokens.end());
       int l=0,r=tokens.size()-1;
       int maxscore=0,curscore=0;
       while(l<=r)
       {
        if(power>=tokens[l]){
            curscore++;
            power=power-tokens[l++];
       }
        else
        {
            curscore--;
            power=power+tokens[r--];
        }
        if(curscore<0) break;
        maxscore=max(maxscore,curscore);
       } 
       return maxscore;
    }
};