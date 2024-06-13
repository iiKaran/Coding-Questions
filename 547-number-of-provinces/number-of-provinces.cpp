class Solution {
    void dfs( int node , vector<bool> & vis, unordered_map<int , vector<int> >  & adj){
        
        vis[node]= 1 ; 
        for( auto  i : adj[node]){
            if(vis[i]==false){
                dfs(i,vis,adj);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& mat) {
        unordered_map<int , vector<int> > adj ; 
        for( int i =0; i < mat.size(); i++ ){
            for( int j =0; j < mat[0].size(); j++){

                if(mat[i][j]==1){
                adj[i].push_back(j); 
                adj[j].push_back(i);
                }
            }
        }

        int ans =0; 
        vector<bool> visited(mat.size()+1, false);
        for( int i=0; i < mat.size();i++){

                if(!visited[i]){
                    ans+=1 ; 
                    dfs(i, visited, adj); 
                }
        }
        return ans ;
    }
};