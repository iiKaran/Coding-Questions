class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
            int count=0;
		//Loop through the vector starting from the second element
        for(int i=1;i<nums.size();i++){
		    //Check if the current element is less than or equal to the previous one
            if(nums[i]<=nums[i-1]){
			     //Increment count by the difference between the previous and current elements plus 1
                count+=nums[i-1]-nums[i]+1;
				//Increase the current element by the calculated difference
                nums[i]+=nums[i-1]-nums[i]+1;
            }
        }
        return count;
    }
};