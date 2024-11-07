class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nz = 0 ; 
        for( int curr = 0 ; curr<nums.size(); curr+=1)
        {
            if(nums[curr] != 0){
                swap(nums[curr], nums[nz]); 
                nz+=1 ; 
            }
        }
        return ;
    }
};