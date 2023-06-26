class Solution {
public:
    const int mod = (int)(2e9+7);
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        int dp[n][m];
        
        for(int i = 0; i<n;i++){
            for(int j = 0;j<m;j++){
                if(i>=0 and j>=0 and obstacleGrid[i][j] == 1) dp[i][j] = 0;
                else if(i==0 and j==0) dp[i][j] = 1;
                else{
                    int up = 0;
                    if(j>0) up = dp[i][j-1];
                    int left = 0; 
                    if(i>0) left = dp[i-1][j];
                    dp[i][j] = (left+up)%mod;
                }
            }
        }
        
        return dp[n-1][m-1];
    }
};