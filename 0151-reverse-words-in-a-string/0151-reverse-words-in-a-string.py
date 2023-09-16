class Solution:
    def reverseWords(self, s: str) -> str:
        li = list(s.split())
        n = len(li)
        res = ""
        for i in range(n):
            res+=li[n-i-1]
            if i!=n-1:
                res+=" "
            
            
        return res
       