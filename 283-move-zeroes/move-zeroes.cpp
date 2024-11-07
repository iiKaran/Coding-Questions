class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int zero = 0 ; 
     int n = nums.size(); 
     int last =0, curr =0; 
     while( curr<nums.size()) 
     {
        if(nums[curr] == 0 )
        {
            zero++ ;       
        }
        else{
            nums[last++]= nums[curr];
        }
        curr+=1 ; 
     }
     while( last< n)
     {
        nums[last++]= 0 ; 
     }

    }
};