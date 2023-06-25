class Solution {
public:
    int f(int n,vector<int> &dp){
        if(n==1 or n==2) return n;
        if(dp[n]!=-1) return dp[n];
        
        int left = f(n-1,dp);
        int right = f(n-2,dp);
        
        dp[n] = left + right;
        return dp[n];
        
    }
    int climbStairs(int n) {
        vector<int> dp(n+1);
        for(int i=1;i<=n;i++){
            dp[i] = -1;
        }
        
        return f(n,dp);
        
    }
};