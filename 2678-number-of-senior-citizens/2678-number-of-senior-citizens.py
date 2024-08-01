class Solution:
    def countSeniors(self, details: List[str]) -> int:  
       res=[]
       for i in details:
          x=i[11:13]
          v=int(x)
          res.append(v)
          p=filter(lambda x: x >60,res)
       return len(list(p))