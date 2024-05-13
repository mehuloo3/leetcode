class Solution {
public:
vector<int> LPS(string &s) 
{
	    // Your code goes here
        int n=s.size();
        vector <int> lps(n);
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
  return lps;
}
bool check(string &s,int val){
   int n=s.size();
   int j=0;
      for(int i=0;i<n;i++){
            if(j==val) 
            j=0;
            if(s[i]!=s[j]) 
            return false;
            j++;
        }
        return true;
    }
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        vector<int> lps=LPS(s);
        int val=lps[n-1];
        if(val==0) 
        return false;
        return check(s,val);
    }
};