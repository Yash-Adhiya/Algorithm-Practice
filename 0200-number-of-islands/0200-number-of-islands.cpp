class Solution {
public:
    
    void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid){
        if(row<0 or col<0 or row>=grid.size() or col>=grid[0].size() or grid[row][col]=='0' or vis[row][col]==1) return;
        vis[row][col]=1;
        dfs(row+1,col,vis,grid);
        dfs(row,col-1,vis,grid);
        dfs(row-1,col,vis,grid);
        dfs(row,col+1,vis,grid);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
       
        int n = grid.size();
        int m = grid[0].size();
         vector<vector<int>> vis(grid.size(),vector<int> (grid[0].size(),0));
        int ct = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(vis[i][j]==0 and grid[i][j]=='1'){
                    ct++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        
        return ct; 
    }
};