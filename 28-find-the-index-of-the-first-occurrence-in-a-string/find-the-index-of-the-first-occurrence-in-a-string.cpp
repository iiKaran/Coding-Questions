class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int found  = 0 ; 
        int index=-1 ; 
        for( int i=0; i < haystack.length(); i++)
        {
            if(haystack[i]==needle[found])
            {
                if(found==0)
                index=i ;

                found++; 
                
                if(found==needle.length())
                return index; 
            }
            else{
                i -= found ; 
                found=0 ;
                
            }
            
        }
        return -1; 

    }
};