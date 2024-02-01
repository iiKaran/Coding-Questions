class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        int right = 1 ;
        for (int i = n - 1; i >= 0; i--) {
            int curr = nums[i];
            nums[i] = prefix[i] * right;
            right *= curr ;
        }
        // for (int i = n - 1; i >= 0; i--) {
        //     nums[i] = prefix[i] * suffix[i];
        // }
        return nums;
    }
};