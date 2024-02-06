class Solution {
public:
    int strStr(string haystack, string needle) {
        
    
     size_t pos = haystack.find(needle);

    if (pos != std::string::npos) {
       return int(pos); 
    } else {
        return -1 ; 
    }
    }
};