class Solution {
public:
    int specialArray(vector<int>& nums) {
        unordered_map<int,int> mp ; 
        sort(nums.begin(), nums.end()); 
        for( int x=0; x <= nums.size(); x++){
            for( int i =0; i  < nums.size(); i++)
             if(nums[i]>=x)
             {
                mp[x] += nums.size()-i ;
                break; 
             }
        }
        for(auto it: mp)
        {
            if(it.first == it.second)
            return it.first ;
        }
        return -1 ; 
    }
};