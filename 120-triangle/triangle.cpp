class Solution {
    int solve( vector<vector<int> > & tri , int i, int row , int n,vector<vector<int>>&dp)
    {
        if(row>= n || i>= tri[row].size() )
        return 0; 
    
    if(dp[row][i]!=-1)
    return dp[row][i];
        
    int op1=tri[row][i]+solve(tri, i,row+1,n,dp);
    int op2=tri[row][i]+solve(tri, i+1,row+1,n,dp);

       return dp[row][i]= min(op1,op2);
    }
public:
    int minimumTotal(vector<vector<int>>& tri) {
        
        int n = tri.size();
         vector<vector<int>>dp(tri.size()+1,vector<int>(tri.size()+1,-1));
        return solve(tri , 0 , 0 , n ,dp) ; 
    }
};