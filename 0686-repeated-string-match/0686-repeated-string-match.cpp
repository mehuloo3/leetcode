class Solution {
public:
void lpsfind(vector<int>& lps,string s) 
{
	    // Your code goes here
	    int pref=0,suf=1;
	    while(suf<s.size())
	    {
	        if(s[pref]==s[suf])
	        {
	        lps[suf]=pref+1;
	        pref++;
	        suf++;  
	          }
	    else
	    {
	        if(pref==0)
	        {
	            lps[suf]=0;
	            suf++;
	        }
	        else
	        {
	            pref=lps[pref-1];
	        }
	    }
  }
}

int kmp(string haystack, string needle) {

        vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int second=0,first=0;
        while(second<needle.size() && first<haystack.size())
        {
            if(needle[second]==haystack[first])
            {
                first++;
                second++;
            }
            else
            {
                if(second==0)
                {
                    first++;
                }
                else
                {
                    second=lps[second-1];
                }
            }
        }
        if(second==needle.size())
          return 1;
    return 0;
    }

int repeatedStringMatch(string a, string b) {
         if(a==b) return 1;
         int repeat=1;
         string temp=a;
        while(temp.size()<b.size())
        {
           temp+=a;
           repeat++;
        }
        //kmp pattern search

        if(kmp(temp,b)==1)
        return repeat;

        if(kmp(temp+a,b)==1)
        return repeat+1;

        return -1;
    }
};