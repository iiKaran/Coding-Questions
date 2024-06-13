class Solution {
public:
    void sortColors(vector<int>& nums) {
       int i , j , k ; 
       int n = nums.size(); 
       i=j=0; 
       k= n-1; 

       while(j<=k){
         
         if(nums[j]==0){
            swap(nums[i],nums[j]); 
            i++; j++; 
         }
         else if(nums[j]==2){
            swap(nums[j],nums[k]); 
            k--; 
         }
         else{
            j++; 
         }
       }
    }
};