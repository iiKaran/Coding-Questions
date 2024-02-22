class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char , char> mp ; 
        unordered_map<char , char> rmp ; 
        for( int i =0; i < s.length();i++)
        {
            char curr = s[i]; 
            if(mp.find(curr)==mp.end())
            {
                  if(rmp.find(t[i]) != rmp.end())
                  {
                      if(rmp[t[i]]!= curr)
                      return false ; 
                  }
                   mp[curr]=t[i]; 
                   rmp[t[i]]= curr ; 
            }
            else{
                   char mapped= mp[curr]; 
                   if(mapped != t[i])
                   return false ; 
            }
        }
       return true ;  
    }
};