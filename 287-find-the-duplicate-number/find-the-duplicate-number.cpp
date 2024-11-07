class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l =0 , r =nums.size()-1; 
        
        int ans =0;
        while( l<=r)
        {
            int mid = l +(r-l)/2 ; 
            int cnt =0; 
            for( int num : nums)
            {
                if(num <= mid)
                {
                    cnt+=1 ; 
                }
            }
            if(cnt<= mid)
            {
                l = mid+1 ; 
            }
            else{
                ans = mid ; 
                r= mid-1 ; 
            }
            
        } 
        return ans ; 
    }
};