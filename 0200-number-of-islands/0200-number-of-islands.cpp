class Solution {
public:
    vector<int> dir = {-1,0,1,0,-1};
    
    void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>>& grid){
        vis[row][col]=1;
        for(int k=0;k<4;k++)
        {
            int nrow = row + dir[k];
            int ncol = col + dir[k+1];
            if(nrow>=0 and nrow<grid.size() and ncol>=0 and ncol<grid[0].size())
            {
                if(grid[nrow][ncol]=='1' and vis[nrow][ncol]==0)
                {
                    dfs(nrow,ncol,vis,grid);
                }
            }
        }
        
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