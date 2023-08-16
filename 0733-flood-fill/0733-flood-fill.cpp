class Solution {
public:
    void dfs(int sr,int sc,int color,int n,int m,vector<vector<int>>& image, vector<vector<int>> &vis){
        int origin = image[sr][sc];
        image[sr][sc] = color;
        vis[sr][sc] = 1;
        
        int nx[4] = {1,-1,0,0};
        int ny[4] = {0,0,1,-1};
        
        for(int i = 0;i<4;i++){
            int xx = sr + nx[i];
            int yy = sc + ny[i];
            
            if(xx>=0 && xx<n && yy>=0 && yy<m && vis[xx][yy]==0 && image[xx][yy]==origin){
                dfs(xx,yy,color,n,m,image,vis);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        dfs(sr,sc,color,n,m,image,vis);
        
        return image;
    }
};