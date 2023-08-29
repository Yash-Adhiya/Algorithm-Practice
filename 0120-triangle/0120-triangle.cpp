class Solution {
public:
    
    int f(int i, int j,vector<vector<int>> &triangle,vector<vector<int>> &dp){
        // base case
        int n = triangle.size();
        if(i==n-1){
            return triangle[i][j];
        }
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int d = triangle[i][j] + f(i+1,j,triangle,dp);
        int dg = triangle[i][j] + f(i+1,j+1,triangle,dp);
        
        return dp[i][j] = min(d,dg);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        
        vector<int> front(n,0),cur(n,0);
        for(int j=0;j<n;j++){
            front[j] = triangle[n-1][j];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int up = triangle[i][j] + front[j];
                int slant = triangle[i][j] + front[j+1];
                
                cur[j] = min(up,slant);
            }
            front = cur;
        }
        
        
        
        return front[0];
        
    }
};