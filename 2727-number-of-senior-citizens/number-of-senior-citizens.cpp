class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int elders = 0 ; 
        for( auto person : details){
            int age =0 ; 
            age = char(person[11])-'0';
            age = age*10 + char(person[12])-'0';

            if(age > 60)
            elders+=1 ; 
        }
        // cout<<endl; 
        return elders ; 
    }
};