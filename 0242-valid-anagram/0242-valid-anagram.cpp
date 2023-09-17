class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        int m = t.size();
        if(m!=n) return false;
        
        int sh[26] = {0};
        int th[26] = {0};
        for(int i = 0;i<n;i++){
            th[t[i]-'a']++;
            sh[s[i]-'a']++;
        }
        
        for(int i = 0;i<26;i++){
            if(sh[i]!=th[i]) return false;
        }
        
        return true;
    }
};