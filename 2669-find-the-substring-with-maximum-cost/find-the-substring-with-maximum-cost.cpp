class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        
        unordered_map<char ,int> mp ; 
        for(int i =0; i < min(chars.size(),vals.size()); i++){
            mp[chars[i]]= vals[i]; 
        }
        vector<int> arr; 
        for(auto ch:s){
            if(mp.find(ch)!= mp.end()){
                arr.push_back(mp[ch]);
            }
            else{
                arr.push_back(ch -'a'+1);
            }

        }
        int maxi = 0 ; 
        int sum =0; 

        for( int i=0; i < arr.size(); i++){
            sum += arr[i];
            maxi = max(maxi , sum);
            if(sum < 0){
                sum =0; 
            }
        }
        return maxi ; 

    }
};