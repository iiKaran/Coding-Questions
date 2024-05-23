class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l , r , n,sum,ans ; 
        l=r=sum=0; 
        ans=INT_MAX;
        n = nums.size(); 
        
        while(r<n){
            
            while(sum<target && r< n){
                sum += nums[r++]; 
            }
           
            // we have ans now try to shift the window
            while(sum>=target && l<r){
                sum-= nums[l++]; 
            }
                ans= min(ans ,(r-l)); 
        }
        return (ans==n?0:ans+1);
    }
};