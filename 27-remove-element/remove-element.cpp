class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int num =0; 
        // for( auto i : nums)
        // {
        //     if(i!=val) num++; 
            
        // }
        // int notEqual= num; 


        int i =0, j= nums.size()-1; 

        while(i <=j)
        {
            if(nums[j]!=val)
            {
                swap(nums[j],nums[i++]);
            }
            else{
                j--;
            }
        }

        return i ;
    }
};