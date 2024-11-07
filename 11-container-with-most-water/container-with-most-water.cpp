class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans =0; 
        int n = height.size(); 
        int l =0 , r = n-1 ; 
        
        while(l< r)
        {
            int a = height[l];
            int b = height[r]; 
            int mini = min(a,b); 
            ans = max(ans , mini*(r-l));
            if(mini ==a)
            {
                l++;
            }
            else{
                r--; 
            }
        }
        return ans ;
    }
    
};