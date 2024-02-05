class Solution {
public:
    string reverseWords(string s) {
        string ans = ""; 

        int n= s.size(); 
        int i=0;
        while( i < n && s[i]==' ')
         i++; 

        while(i < n)
        {
            if(s[i]!=' ')
            ans+= s[i++]; 

            else if( s[i]==' ' && ans[ans.size()-1] != ' ')
            ans+= s[i++]; 
            else 
            i++; 
        }
        
        if(ans[ans.size()-1]== ' ')
        ans.pop_back(); 
       reverse(ans.begin(),ans.end());

       string finans="";
       string temp ="";
       for(int i=0; i < ans.size(); i++){
            if(ans[i]==' ')
            {
                reverse(temp.begin(),temp.end()); 
                temp+= " ";
                finans += temp ; 
                
                temp ="";
            }
            else 
            temp+= ans[i];
       }
       reverse(temp.begin(),temp.end()); 
                finans += temp ; 
       return finans; 
       
        
    }
};