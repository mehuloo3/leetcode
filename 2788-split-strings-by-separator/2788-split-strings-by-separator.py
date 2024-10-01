class Solution(object):
    def splitWordsBySeparator(self, words, separator):
        """
        :type words: List[str]
        :type separator: str
        :rtype: List[str]
        """
        x=[]
        for i in words:
            for j in i.split(separator):
                if j:
                    x.append(j)
        return x
                