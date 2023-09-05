class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        int n = s.size();
        set<int> st;
        int l = 0;
        int r =0;
        int ans = INT_MIN;
        for(int r=0;r<n;r++){
            if(st.find(s[r])!=st.end()){
                while(l<r && st.find(s[r])!=st.end()){
                    st.erase(s[l]);
                    l++;
                }
            }
            
            st.insert(s[r]);
            ans = max(ans, r-l+1);
        }
        
        
        return ans;
    }
};