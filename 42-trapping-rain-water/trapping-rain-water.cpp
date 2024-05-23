class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); 
        vector<int> left(n,0); 
        vector<int> right(n,0);

        int maxi=height[0]; 
        for( int i =1; i <n ; i++)
        {
            left[i]= maxi; 
            maxi = max(maxi , height[i]);
        }
        maxi = height[n-1]; 

        for(int i=n-2; i>=0; i--){
            right[i]= maxi; 
            maxi = max(maxi , height[i]);
        }

        int ans =0; 
        for( int i =0; i <n; i++){
            int curr = height[i]; 
            int mini = min(left[i],right[i]); 

            if(mini> curr){
                ans+= (mini-curr); 
            }
        }
        return ans ; 
    }
};