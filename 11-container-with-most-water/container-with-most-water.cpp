class Solution {
public:
    int maxArea(vector<int>& height) {

        int i =0, j = height.size()-1; 

        int ans = 0;
        while( i <= j)
        {
            int a = height[i]; 
            int b = height[j]; 

            int mini = min(a,b); 
            ans = max(ans ,mini*(j-i));
            if(mini==b)
            j--; 
            else
            i++; 

        }
        return ans ; 
    }
};