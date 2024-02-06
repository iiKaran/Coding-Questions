bool cmp(string& a, string& b) { return  a.length() <= b.length();}
class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {

        int n = arr.size();
        if(n==0)
        return ""; 
        if(n==1)
        return arr[0]; 
        string small = arr[0];
        for(auto i : arr)
        {
            if( i.length()<=small.length())
            small= i ;

        }
        string ans ="";
            bool check = true ; 
        for(int i =0; i < small.length(); i++)
        {
            char ch = small[i]; 
            for(int j=0  ; j < n ; j++)
            {   
                if( arr[j][i] != ch)
                {
                    check= false ; 
                    break; 
                }
                else 
                continue ; 
            }
            if(check)
            ans += ch; 
            else 
            return ans ; 
        }
        return ans;
    }
};