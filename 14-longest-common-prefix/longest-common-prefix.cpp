class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string f=s[0];
        string ans="";
        int n=s.size();
        string l=s[n-1];
        for(int i=0;i<f.size();i++){
            if(f[i]==l[i]){ ans+=f[i];
            }else{ return ans;}
        } return ans;
    }
};