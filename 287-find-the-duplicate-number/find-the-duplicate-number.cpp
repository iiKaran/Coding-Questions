#include<bits/stdc++.h> 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end()); 
        unordered_map<int , bool> mp ; 
        for( int i =0 ; i < nums.size(); i++)
        {
            if(mp[nums[i]])
            return nums[i]; 
            mp[nums[i]]= true ; 
        }
        return -1 ; 
    }
};