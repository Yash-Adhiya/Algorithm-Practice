class Solution {
public:
    int prime = 1e9 + 7;
    int f(int i,int j,string s, string t, vector<vector<int>> dp){
        // base condition 
       
        if(j<0) return 1;
         if(i<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==t[j]){
            int leaves = f(i-1,j-1,s,t,dp);
            int stays = f(i-1,j,s,t,dp);
            return dp[i][j] = (leaves+stays)%prime;
        }
        else{
            return dp[i][j] = f(i-1,j,s,t,dp)%prime;
        }
        
        
    }
    int numDistinct(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    
    for(int i=0;i<n+1;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<m+1;i++){
        dp[0][i]=0;
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            
            if(s1[i-1]==s2[j-1])
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%prime;
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    
    return dp[n][m];
    }
};