class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        int n = s.size();
        vector<int> mpp(256,-1);
        int l = 0;
        int r =0;
        int ans = INT_MIN;
        while(r<n){
            if(mpp[s[r]]!=-1){
                l = max(l, mpp[s[r]]+1);
            }
            mpp[s[r]] = r;
            r++;
            ans = max(ans, r-l);
        }
        
        
        return ans;
    }
};