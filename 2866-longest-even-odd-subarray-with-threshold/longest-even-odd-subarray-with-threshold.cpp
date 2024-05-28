class Solution {
    int findnext(vector<int> & nums , int start , int thresh , int n){

        for( int i=start; i< n ; i++){
            if(nums[i]<= thresh && nums[i]%2==0)
            return i ; 
        }
        return n ; 
    }
public:
    int longestAlternatingSubarray(vector<int>& nums, int thresh) {
        // intitalize l=0 r ==0;    
        int n = nums.size();  
        int l = findnext(nums , 0,thresh, n ); 
        int r = l+1; 
        int ans = 0 ; 
        if(l!= n) ans = 1 ;  
        while(r< n){

            if(nums[r]<= thresh && (r-1<0 || nums[r]%2 != nums[r-1]%2)){
                ans = max(ans ,( r-l)+1); 
                r++;
            }
            else{
                l = findnext(nums,r,thresh,n);
                r= l+1;
            }
        }
        return ans ;
        
        return 0 ; 
    }
};