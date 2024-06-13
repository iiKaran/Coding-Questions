class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> vec(numRows ,"");
        int n = s.length(); 
        int i =0; 
        while(i< n){
            for(int j =0; j < numRows && i < n ; j++){
                vec[j].push_back(s[i++]);
            }
            for( int j = numRows-2; j>=1 && i < n; j--){
                vec[j].push_back(s[i++]);
            }
        }
        string ans ="";
        for(auto i : vec){
            ans+=i; 
        }
        return ans;
    }
};