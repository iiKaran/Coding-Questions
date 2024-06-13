class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0 ; 
        int ans =1; 
        int l , r; 
        l=0 ; r=0;  
        unordered_map<char , int> freq ; 
        while(r< s.length())
        {
           char curr = s[r]; 

           if(freq[curr]==0){
             ans = max(ans, r-l+1);  
           }
           else{
               while(freq[curr]!=0 && l<=r){
                  char curr = s[l++]; 
                  freq[curr]-=1 ; 
               }
           }
             freq[curr]+=1 ; 
              r+=1 ; 
        }
        return ans ; 
     
    }
};