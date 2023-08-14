class Solution {
public:
    
    void dfs(int row, int col,vector<vector<int>> &vis,vector<vector<char>>& grid){
        if(row<0 or col<0 or row >= grid.size() or col>=grid[0].size() or vis[row][col]==1 or grid[row][col]=='0') return;
        vis[row][col] = 1; 
        dfs(row-1,col,vis,grid);
        dfs(row,col+1,vis,grid);
        dfs(row+1,col,vis,grid);
        dfs(row,col-1,vis,grid);
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int> (n,0));
        int ct = 0;
        for(int row = 0;row<m;row++){
            for(int col=0;col<n;col++){
                if(vis[row][col]==0 and grid[row][col] == '1'){
                    ct++;
                    dfs(row,col,vis,grid);
                }
            }
        }
        
        return ct;
        
    }
};