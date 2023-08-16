class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int time = 0;
        int tot_orange = 0;
        int cnt = 0;
        queue<pair<int,int>> q;
        
        int nx[4] = {1,-1,0,0};
        int ny[4] = {0,0,1,-1};
        
        // push all rotten oranges to queue while calculating total no of oranges
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0) tot_orange++;
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        
        while(!q.empty()){
            int k = q.size();
            cnt+=k;
            while(k--){
                auto r = q.front();
                q.pop();
                int x = r.first; int y = r.second;
                for(int i=0;i<4;i++){
                    int xx = x + nx[i];
                    int yy = y + ny[i];
                    if(xx<0 or yy<0 or xx>=n or yy>=m or grid[xx][yy]!=1) continue;
                    grid[xx][yy] = 2;
                    q.push({xx,yy});
                }
            }
            
            if(!q.empty()) time++;
        }
        
        return tot_orange==cnt? time:-1;
    }
};