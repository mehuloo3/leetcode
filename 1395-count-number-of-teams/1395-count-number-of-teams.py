class Solution(object):
    def numTeams(self, rating):
        """
        :type rating: List[int]
        :rtype: int
        """
        total=0
        n=len(rating)
        for i in range(0,n):
             lm=0
             ll=0
             rm=0
             rl=0
             for j in range(i+1,n):
                if rating[j]<rating[i]:
                    lm+=1
                elif rating[j]>rating[i]:
                    ll+=1
             for j in range(i):
                if rating[j]<rating[i]:
                    rm+=1
                elif rating[j]>rating[i]:
                    rl+=1
             total+=lm*rl+ll*rm
        return total
            