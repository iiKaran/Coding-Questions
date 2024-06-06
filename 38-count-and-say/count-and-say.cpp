class Solution {
    string  rle(string str){
        char ch = str[0];
        string ans ="";
        int count=0 ; 
        for( int i=0; i<str.length();i++){
            if(str[i]==ch)
            {
                count++; 
            }
            else{
                ans += to_string(count); 
                ans+= ch ; 
                ch= str[i]; 
                count=0;
                i--; 
            }
        }
        if(count !=0){
            ans += to_string(count); 
                ans+= ch ; 
        }
        return ans ; 
    }
public:
    string countAndSay(int n) {
        if(n==0) return ""; 
        if(n==1) return "1"; 
        if(n ==2) return "11";  

        string tmp= countAndSay(n-1);
        return rle(tmp); 
       
    }
};