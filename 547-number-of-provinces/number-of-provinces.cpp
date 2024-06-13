class Solution {
    void dfs( int node , vector<bool> & vis, vector<vector<int>>& mat){
        
        vis[node]= 1 ; 
        for( int col =0; col< mat[node].size(); col++){
            if(mat[node][col]== 1 && vis[col]== false){
                dfs(col , vis , mat);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& mat) {
       
        int ans =0; 
        vector<bool> visited(mat.size()+1, false);
        for( int i=0; i < mat.size();i++){

                if(!visited[i]){
                    ans+=1 ; 
                    dfs(i, visited, mat); 
                }
        }
        return ans ;
    }
};