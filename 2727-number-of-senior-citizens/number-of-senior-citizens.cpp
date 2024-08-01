class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int elders = 0 ; 
        for( auto person : details){
            int age =0 ; 
            int tens = char(person[11])-'0';
            int one= char(person[12])-'0';
             
            if(tens> 6 || (tens==6 && one > 0))
            elders+=1 ; 
        }
        // cout<<endl; 
        return elders ; 
    }
};