class Solution(object):
    from collections import defaultdict
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        ana=defaultdict(list)
        
        for i in strs:
            key="".join(sorted(i))
            ana[key].append(i)
        return list(ana.values())
        