class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        res = ""
        Open=0
        close=0
        start = 0
        for i in range(len(s)):
            if s[i]=='(':
                Open+=1
            elif s[i]==')':
                close+=1
            
            if Open==close:
                res+=s[start+1:i]
                start = i+1
                Open = 0
                close = 0
          
        return res
                
        