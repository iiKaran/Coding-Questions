#include<bits/stdc++.h>
class Solution {
    std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    
    return tokens;
}
public:
    int compareVersion(string version1, string version2) {
        vector<string> t1 = split(version1 ,'.');
        vector<string> t2 = split(version2,'.');

         int m = t1.size(); 
         int n = t2.size(); 
         int i , j ; 
         i =0; j=0; 
         while( i < m && j < n )
         {
            if(stoi(t1[i])> stoi(t2[i]))
            return 1; 
            else if(stoi(t1[i])< stoi(t2[i]))
            return -1 ; 

            i+=1;
            j+=1 ; 
         }
         while( i < m )
         {
            if(stoi(t1[i])> 0)
             return 1; 

            i+=1; 
         }
 while( j < n )
         {
            if(stoi(t2[j])> 0)
             return -1; 
             
            j+=1; 
         }

           
         return 0 ; 
    }
};