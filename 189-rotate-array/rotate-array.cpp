class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int rot = k % nums.size(); 

        reverse(nums.begin(), nums.end()); 
        reverse(nums.begin(), nums.begin()+rot); 
        reverse(nums.begin()+rot, nums.end()); 
    }
};