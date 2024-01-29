class Solution {

public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int remove = 0;
        for (int curr = 0; curr < nums.size()-1; curr++) {
            if (nums[curr] == nums[curr +1]) {
                count++;
            } else {
                count = 1;
            }
            if (count > 2) {
                nums[curr] = INT_MAX;
                remove++;
            }
        }

        sort(nums.begin(), nums.end());
        return (nums.size() - remove);
    }
};