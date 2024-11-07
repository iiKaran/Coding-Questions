class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // sorting nlogn 
        // hashing map+ n 
        // using the indexes to mark the vis elemeent 
        
        vector<int> ans ; 
        for( int i =0; i< nums.size(); i++)
        {
            int num = abs(nums[i]);
            int ind = abs(nums[i]) -1; 
            
            if(nums[ind]<0)
            {
                ans.push_back(num); 
            }
            else{
                nums[ind]*=-1 ; 
            }
        }
        return ans ; 
    }
};