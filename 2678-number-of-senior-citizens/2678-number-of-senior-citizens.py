class Solution(object):
    def countSeniors(self, details):
       res=[]
       for i in details:
          x=i[11:13]
          v=int(x)
          res.append(v)
          p=filter(lambda x: x >60,res)
       return len(list(p))

         # cnt=0
         # for i in details:
         #    if int(i[11:13])>60:
         #        cnt=cnt+1
         # return cnt
        