class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int insert = (m + n) - 1;

        m--;
        n--;
        while (insert >= 0) {
            if (m >= 0 && n >= 0) {
                if (nums1[m] >= nums2[n]) {
                    nums1[insert--] = nums1[m--];
                } else {
                    nums1[insert--] = nums2[n--];
                }
            } else if (m >= 0) {
                nums1[insert--] = nums1[m--];
            } else if (n >= 0) {
                nums1[insert--] = nums2[n--];
            }
        }
        return ;
    }
};