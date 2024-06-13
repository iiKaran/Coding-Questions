class Solution {
public:
    vector<string> printVertically(string s) {
        
        s+=" ";
        string prev="";
        vector<string> words ; 
        if(s==" ") return words ;
        int maxLen =0;  
        for(auto i : s){
            if(i ==' ')
            {
                if(prev != "")
                maxLen = maxLen>prev.length()?maxLen:prev.length();
                words.push_back(prev);
                prev =""; 
            }
            else
            prev+= i ; 
        }
        vector<string> ans(maxLen,"");
        
        for(int i =0 ; i < words.size(); i++){
            
            int len = words[i].length(); 
            int curr =0; 
            for(int j =0; j < maxLen ; j++){
                if(curr<len){
                    ans[j]+= words[i][curr]; 
                    curr+=1;
                }
                else{
                     ans[j]+=" ";
                }
            }
        }
        for(int i =0; i < maxLen ; i++){
            string word = ans[i]; 

            while(!word.empty() && word.back()==' ')
            word.pop_back(); 

            ans[i]=word;

        }

        return ans; 
        
    }
};