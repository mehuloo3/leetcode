class Solution(object):
    def binaryNum(self,n):
        num=[]
        while n!=0:
            x=n%2
            num.append(x)
            n=n//2
        return num[::-1]
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        ans=[]
        for i in range(0,n+1):
            p=self.binaryNum(i)
            ans.append(p.count(1))
        return ans
    
    
        