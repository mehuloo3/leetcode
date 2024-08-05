class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: List[str]
        """
        l1= list(s1.split(" "))
        l2= list(s2.split(" "))
        l3=l1+l2
        l4=[]
        for i in l3:
            if l3.count(i)<2:
                l4.append(i) 
        return l4
        