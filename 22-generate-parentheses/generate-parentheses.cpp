class Solution {
    void solve(int open,int close , int n,string temp,vector<string> &ans)
    {
        if(temp.size()==2*n)
    {
        ans.push_back(temp);
        return;
    }
    if(open>0)
    solve(open-1,close,n,temp+'(',ans);
    if(close>open)
    solve(open,close-1,n,temp+')',ans);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
        solve(n,n,n,"",ans);
        return ans ; 
    }
};