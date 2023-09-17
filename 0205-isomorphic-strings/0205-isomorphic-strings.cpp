class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1!=n2) return false;
        int mp1[256] = {0};
        int mp2[256] = {0};
        for(int i = 0;i<n1;i++){
            if(!mp1[s[i]] && !mp2[t[i]]){
                mp1[s[i]] = t[i];
                mp2[t[i]] = s[i];
            }
            else{
                if(mp1[s[i]]!=t[i]) return false;
            }
        }
        return true;
    }
};