#include <bits/stdc++.h> 
// Tabulation approach  

// note: we can always do the same by memoization and space optimization (prev, prev2 concept) 

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n=  nums.size();
    vector<int> dp(n);
    dp[0] = nums[0];
    for(int i=1;i<n;i++){
        
        int pick = nums[i];
        if(i>1) {pick+=dp[i-2];}
        int notPick = 0;
        if(i>0) {
            notPick+=dp[i-1];
        }

        dp[i] = max(pick,notPick);
    }
    return dp[n-1];
}
