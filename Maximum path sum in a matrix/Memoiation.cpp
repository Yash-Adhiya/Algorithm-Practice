#include <bits/stdc++.h> 

int f(int i,int j,vector<vector<int>> &matrix,vector<vector<int>> &dp){

    //Always handle the boundarty cases first
    if(j<0 or j>= matrix[0].size()) return -1e8;
    // base case
    if(i == 0) return matrix[0][j];
    
    if(dp[i][j]!=-1e5) return dp[i][j];

    int ul = matrix[i][j] + f(i-1,j-1,matrix,dp);
    int u = matrix[i][j] + f(i-1,j,matrix,dp);
    int ur = matrix[i][j] + f(i-1,j+1,matrix,dp);

    return dp[i][j] = max(u,max(ul,ur));
}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.

    vector<vector<int>> dp(matrix.size(),vector<int> (matrix[0].size(),-1e5));

    int maxi = -1e8;
    for(int j = 0;j<matrix[0].size();j++){
        maxi = max(maxi,f(matrix.size()-1,j,matrix,dp));
    }

    return maxi; 
}