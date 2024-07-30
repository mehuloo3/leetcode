class Solution:
    def minimumDeletions(self, s: str) -> int:
        res=0
        c=0
        for i in s:
            if i=='a':
                res=min(res+1,c)
            else:
                c+=1
        return res