class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int index=0; 
     int curr = 0 ; 

     while(curr<nums.size())
     {
         int elem= nums[curr]; 
         curr++;
         
         while(curr<nums.size() &&elem==nums[curr])
         curr++;
 
         nums[index]=elem ; 
         index++;
     }   
     return index; 
    }
};