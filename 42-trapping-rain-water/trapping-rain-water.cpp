class Solution {
public:
    int trap(vector<int>& height) {
        int left , right ; 
        int n = height.size(); 
        int lm = height[0],rm = height[n-1]; 
        left=1 ; 
        right = n-2 ; 
        int water =0; 

        while(left<=right){
            if(height[left]>lm){
                lm = height[left++];
            }
            else if(height[right]>rm)
            {
                rm= height[right--];
            }
            else if(lm<=rm){
                water += lm - height[left++];
            }
            else if(rm<=lm){
                water+= rm- height[right--];
            }
        }
        return water ; 
    }
};