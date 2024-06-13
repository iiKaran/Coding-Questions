class Solution {
public:
    bool detectCapitalUse(string word) {


        int lower = 0, upper = 0; 
        for( int i =0; i < word.length(); i++){
             char ch = word[i];
              if(isupper(ch)) upper+=1 ; 
              else lower+=1 ;
        }

        int n = word.length();
        
        if(upper== n)
        return true ; 
        
        if(lower == n) return true ; 
        
         if(upper ==1 && isupper(word[0]))
         return true ; 
        
        return false ; 
    }
};