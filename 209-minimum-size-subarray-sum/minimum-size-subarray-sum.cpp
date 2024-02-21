class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i =0, n = nums.size(); 
        int j= 0 ;
        
        int len = n; 
        int currsum =0 ; 
        while(j< n)
        {
          while(j<n && currsum < target)
          currsum += nums[j++]; 

          
          while( i < j && currsum>= target)
          {
              currsum -= nums[i++]; 
          }
          len = min(len ,(j-i)); 
        }

        if(len==n) return 0 ; 
        return len+1; 
    }
};