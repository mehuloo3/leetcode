class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
      sort(skill.begin(),skill.end());
      int n=skill.size();
      long ans=0,t=skill[0]+skill[n-1],v1,v2;
        
        int i=0,j=n-1;
        while(i<j)
        {
            v1=skill[i++],v2= skill[j--];
            if((v1+v2!=t))
                return -1;
            else
            ans+=(v1*v2);
        }
        return ans;
    }
};