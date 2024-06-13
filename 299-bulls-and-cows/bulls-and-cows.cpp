class Solution {
public:
    string getHint(string secret, string guess) {
          int bulls =0; 
          unordered_map<char , int> pos ; 
          for( int i=0; i<min(secret.length(),guess.length()); i++)
          {
              if(i <secret.length() && i <guess.length() &&   secret[i]==guess[i])
              {
                bulls+=1 ; 
                 secret[i]= '*'; 
                 guess[i]='*';
              }
              else{
                 pos[secret[i]]+=1; 
              }
          }
          int cows =0; 
            for( int i=0; i < guess.length(); i++){
                if(pos[guess[i]])
                {
                     cows+=1 ; 
                     pos[guess[i]]--;
                }
            }
          return to_string(bulls)+"A" + to_string(cows)+"B"; 
    }
};