class Solution {
public:
    string convert(string s, int numRows) {
        unordered_map<int , string> mp ; 

        if(numRows ==1)
        return s ; 

        for( int row =1; row<=numRows; row++)
        mp[row]=""; 

        int currRow=1; 
        bool down= true; 
        for(auto ch: s)
        {
            mp[currRow]+= ch ; 
            if(down)
            {
            currRow++;
            if(currRow==numRows)
              down = false ; 
            }
            else 
            {
               currRow--; 
               if(currRow==1)
               down = true ;

            }
            
        }
        string ans=""; 
         for( int row =1; row<=numRows; row++)
         ans += mp[row];


        return ans ;
    }
};