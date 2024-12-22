class Solution {
public:
    int beautifulSubstrings(string s, int k) {
      int p=0;
        for(int i=0; i<s.size(); i++)
	{
		int con=0,vow=0;
		for(int j=i; j<s.size(); j++)
		{
			if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' )
			{
				con++;
			}
			else {
				vow++;
			}

			if(vow==con)
			{
				if((vow*con)%k==0)
				{	p++;
				}
			}

		}
	}
	// cout<<p<<endl;
        return p;
    }
};