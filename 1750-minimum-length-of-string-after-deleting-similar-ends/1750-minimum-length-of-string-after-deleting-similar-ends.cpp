class Solution {
public:
    int minimumLength(string s) {
        int left=0;
        int right=s.size()-1;
        while(s[left]==s[right] && left<right)
        {
            char ans=s[left];
            while(left<=right && s[left]==ans)
            {
                left++;
            }
           while(left<=right && s[right]==ans)
           {
            right--;
           }

        }
        return right-left+1;
    }
};