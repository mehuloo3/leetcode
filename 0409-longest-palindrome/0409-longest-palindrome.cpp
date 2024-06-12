class Solution {
public:
    int longestPalindrome(string s) {


        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a')
            {
                v1[s[i]-'a']++;
            }
            else
            v2[s[i]-'A']++;
        }
    int count=0;
    bool odd=0;
    for(int i=0;i<26;i++)
    {
        if(v1[i]%2==0)
         count+=v1[i];
         else{
            odd=1;
          count+=v1[i]-1;}
         
         if(v2[i]%2==0)
         count+=v2[i];
         else{odd=1;
         count+=v2[i]-1;}
    }

    //     vector<int> v1(26, 0);
    //     vector<int> v2(26, 0);
    //     for (int i = 0; i < s.size(); i++) {
    //         if (s[i] >= 'a')
    //             v1[s[i] - 'a']++;
    //          else
    //             v2[s[i] - 'A']++;
    //     }
    //     bool odd = 0;
    //     int count = 0;
    //     for (int i = 0; i < 26; i++) {
    //         if (v1[i] % 2 == 0)
    //             count += v1[i];
    //         else {
    //             odd = 1;
    //             count += v1[i] - 1;
    //         }
    //         if (v2[i] % 2 == 0)
    //             count += v2[i];
    //         else {
    //             odd = 1;
    //             count += v2[i] - 1;
    //         }
    //     }
        return count + odd;
    }
};