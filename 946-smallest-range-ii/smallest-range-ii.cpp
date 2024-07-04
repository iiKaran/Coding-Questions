#include<bits/stdc++.h>
class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end()); 
        int n = nums.size();
        int ans = (nums[n-1]- nums[0]); 
        int l = nums[0]+k ; 
        int r = nums[n-1]- k ; 
        for( int i =0; i < n-1 ; i++){

            // min will get update when i dec i+1 th index value by k 
            int mini = min(l , nums[i+1]-k);
            // max will get update when i  
            int maxi = max(r , nums[i]+k);

            ans = min(ans, maxi-mini); 
        }
        return ans ; 
    }
};