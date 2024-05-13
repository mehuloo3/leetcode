class Solution {
public:
 bool checkIfPangram(string sentence) {

    vector<bool>v(26,0);
    for(int i=0;i<sentence.size();i++)
    {
        v[sentence[i]-'a']=1;
    };
    for(int i=0;i<26;i++)
    {
       if(v[i]==0)
         return 0;
    };
    return 1;



        // vector<bool> v(26, false);
        // for (char ch : sentence) {
        //     if (ch >= 'a' && ch <= 'z') {
        //         v[ch - 'a'] = true;
        //     }
        // }
        // for (bool value : v) {
        //     if (!value) {
        //         return false;
        //     }
        // }
        // return true;
    }
};
