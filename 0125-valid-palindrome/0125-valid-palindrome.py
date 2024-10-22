class Solution:
    def isPalindrome(self, s: str) -> bool:
        t=""
        if s=="":
            return False
        for i in s:
            # if i==',' or i==' ' or i==':':
            #      continue
             if i.isalnum():  
                t += i
        a=t.lower()
        b=a[::-1]

        return a==b
        