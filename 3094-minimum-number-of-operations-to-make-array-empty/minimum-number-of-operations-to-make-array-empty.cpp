class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int , int > freq ; 
        for(auto num: nums){
            freq[num]+=1 ;  // map element-> frequency
        }
        
       int ans = 0;
        for(auto [n, f] :freq){
            if(f == 1) return -1;
            if(f%3==1) ans += (2 + (f-4)/3);
            else if(f%3 == 0) ans += f/3;
            else ans += (1+(f-2)/3);
        }
        return ans;
    }
};