class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        codes=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        X=set()
        
        for w in words:
            ans=" "
            for c in w:
                ans+=codes[ord(c)-ord('a')]
            X.add(ans)    
        return len(X)