class Solution:
    def largestOddNumber(self, s: str) -> str:
        i = len(s) - 1
        while i>=0:
            if(int(s[i])%2!=0):
                return s[0:i+1]
            i-=1
        return ''