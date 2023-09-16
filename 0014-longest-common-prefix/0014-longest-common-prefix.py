class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        li = []
        for i in strs:
            li.append(len(i))
            
        minn = min(li)
        check = strs[0]
        res = ""
        for i in range(minn):
            for s in strs:
                if s[i]!=check[i]:
                    return res
            res+=check[i]
        return res
            
        