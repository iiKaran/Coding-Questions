class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =1 ; 
        int last= 0 ; 
        for( int i = 1 ; i < nums.size(); i++)
        {
            if(nums[last] == nums[i])
            {
                continue ; 
            }
            else{
                last++ ; 
                nums[last]= nums[i];
            }

        }
        return last+1; 
    }
};