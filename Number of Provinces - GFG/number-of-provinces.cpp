//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int node,int V, vector<int> &vis,vector<int> g[]){
      vis[node] = 1;
      
      for(auto &child: g[node]){
          if(vis[child]==0){
              dfs(child,V,vis,g);
          }
      }
  }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> g[V];
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                if(adj[i][j]==1 and i!=j){
                    g[i].push_back(j);
                }
            }
        }
        
        vector<int> vis(V,0);
        int ct = 0;
        for(int i = 0;i<V;i++){
            if(vis[i]==0){
                ct++;
                dfs(i,V,vis,g);
            }
        }
        
        return ct;
        
        
        
       
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends