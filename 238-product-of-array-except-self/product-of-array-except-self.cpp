class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul = 1, zeroIndex = 0, n = nums.size();
        for (auto i : nums) {
            if (i != 0)
                mul *= i;
            else
                zeroIndex++;
        }
        if (zeroIndex != 0 && zeroIndex != n) {
            for (int i = 0; i < n; i++) {
                if (nums[i] == 0 && zeroIndex==1)
                    nums[i] = mul;
                else
                    nums[i] = 0;
            }

        } else if(zeroIndex == n){
        for (int i = 0; i < n; i++) 
          nums[i]= 0;
        }
        else{
        for (int i = 0; i < n; i++){
          nums[i]= mul/nums[i];
        }
    }
        return nums; 
    }
};