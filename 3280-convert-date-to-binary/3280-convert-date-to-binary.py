class Solution:
    def de(n): 
         return "{0:b}".format(int(n))
    def convertDateToBinary(self, date: str) -> str:
        x=date[0:4]
        y=date[5:7]
        z=date[8:10]
        p=("{0:b}".format(int(x)),"{0:b}".format(int(y)),"{0:b}".format(int(z)))
        return "-".join(p)
        # return p
        