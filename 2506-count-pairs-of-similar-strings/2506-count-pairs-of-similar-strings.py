class Solution(object):
    def similarPairs(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        cnt=0
        for i in range(len(words)):
            for j in range(i):
                if set(words[i])==set(words[j]):
                    cnt=cnt+1
                
        return cnt 
        