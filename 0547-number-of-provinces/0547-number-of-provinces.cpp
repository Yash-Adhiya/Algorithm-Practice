class Solution {
public:
    
    void dfs(int node, vector<int> &vis,vector<vector<int>>& isConnected ){
        int v = isConnected.size();
        vis[node] = 1; 
        for(int i=0;i<v;i++){
            if(isConnected[node][i]==1 and vis[i]==0){
                
                dfs(i,vis,isConnected);
                
                
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<int> vis(v,0);
        int ct = 0;
        for(int i = 0;i<v;i++){
            if(vis[i]==0){
                ct++;
                dfs(i,vis,isConnected);
            }
        }
        
        return ct;
    }
};