class Solution {
public:
    int jump(vector<int>& nums) {
        
        int l, r, j;
        l=r=j=0; 
        int n = nums.size(); 
        while(r< n-1)
        {
            int f =0; 
            for( int i =l;i<=r; i++){
            f = max(f , nums[i]+i); 

            }
            if(f==0) return -1 ; 

            l = r+1; 
            j+=1 ; 
            r = f;
        }
        return j; 
    }
};