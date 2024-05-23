class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), left=1, lmax=height[0], rmax=height[n-1],right=n-2,water=0; 

        while(left<=right)
        {
             if(height[left]>=lmax)
             lmax=height[left++];
             else if(height[right]>=rmax)
             rmax=height[right--]; 
             else if (lmax <= rmax)
             water+= lmax-height[left++]; 
             else if(rmax<=lmax)
             water+= rmax-height[right--];
        }
        return water ; 
    }
};