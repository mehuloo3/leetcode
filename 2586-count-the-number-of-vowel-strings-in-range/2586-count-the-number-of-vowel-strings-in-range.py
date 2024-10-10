class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:
        cnt=0
        x=['a','e','i','o','u']
        for i in range(left,right+1):
                if words[i][0] in x and words[i][-1] in x:
                    cnt=cnt+1
        return cnt;