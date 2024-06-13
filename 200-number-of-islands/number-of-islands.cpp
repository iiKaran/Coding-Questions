class Solution {
    void dfs( int row , int col , vector<vector<char>>& grid){
        if( row>= grid.size() || col>= grid[0].size()|| col<0 || row<0 || grid[row][col]=='0' || grid[row][col]=='*')
        {
            return ; 
        }
        grid[row][col]='*'; 
        dfs(row+1,col, grid); 
        dfs(row-1,col,grid); 
        dfs(row , col+1, grid); 
        dfs(row,col-1, grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans =0; 
        for( int i =0 ; i < n ; i++){
            for(int j =0; j< m ;j++){
                if(grid[i][j]=='1'){
                    ans+=1 ; 
                    dfs(i,j,grid); 
                }
            }
        }
        return ans ; 
    }
};