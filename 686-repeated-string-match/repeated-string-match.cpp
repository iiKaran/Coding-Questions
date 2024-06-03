class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int na = a.size(); 
        int nb = b.size(); 
        int diff_size = nb/na  ; 
        int min_ans= diff_size; 
        string tmp="";
        while(diff_size--){
            tmp += a ; 
        }
        // now as the size is equal check ans 
        if(tmp.find(b) != string::npos)
        return min_ans ; 

        // check if poss with pref or suff 
        tmp +=a ; 
        if(tmp.find(b) != string::npos)
        return min_ans+1; 
        tmp +=a ; 
        if(tmp.find(b) != string::npos)
        return min_ans+2 ; 

        return -1 ; 
    }
};