class Solution {
public:
    int f(int i, int k, int n, vector<int>& coins, vector<vector<int>>& dp){
        // base case
        if(i==0){
            return (k%coins[0]==0);
        }
        
        // memoiation conditioin 
        if(dp[i][k]!=-1) return dp[i][k]; 
        
        int notpick = f(i-1,k, n, coins, dp);
        int pick = 0;
        if(coins[i]<=k) pick = f(i, k-coins[i],n,coins,dp);
        
        return dp[i][k] = pick + notpick;
        
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1));
        
        return f(n-1,amount, n, coins, dp);
    }
};