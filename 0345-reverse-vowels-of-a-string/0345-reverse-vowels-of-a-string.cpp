class Solution {
public:
  bool check(char c) {
    //both lowercase and uppercase
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

    string reverseVowels(string s) {

        int i=0,j=s.size()-1;
        
        while(i<=j)
        {
            if(check(s[i]) and check(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            //jo not vowel to i++
            else if(!check(s[i]))
            {
                i++;
            }
            //jo not vowel to j--
            else if(!check(s[j]))
            {
                j--;
            }
        }
        
        return s;
    }
};