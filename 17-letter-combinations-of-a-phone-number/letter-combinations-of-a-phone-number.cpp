class Solution {
    vector<string> mapping{"","", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void solve(int ind ,string & digits , int n ,string temp,vector<string> & ans){
        if(ind>=n){
            ans.push_back(temp); 
            return ; 
        }
        //   int dig = digits[ind] - '0'; 
        //   string possible_char = mP[dig];
        for( int j =0; j < mapping[digits[ind]-'0'].length(); j++){
            temp.push_back(mapping[digits[ind]-'0'][j]); 
            solve(ind+1, digits , n , temp ,ans); 
            temp.pop_back(); 
        }
        return ; 
    }
public:
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        vector<string> ans ; 
        if(n==0) return ans ; 
        string temp=""; 
        solve(0,digits,n,temp,ans);
        return ans; 
    }
};