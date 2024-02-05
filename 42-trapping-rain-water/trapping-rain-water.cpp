class Solution {
public:
    int trap(vector<int>& bar) {
        int n = bar.size();
        vector<int> lmax(n, 0), rmax(n, 0);
        int maxi, water;
        maxi = water = 0;
        for (int i = 0; i < n; i++) {
            lmax[i] = maxi;
            maxi = max(maxi, bar[i]);
        }
        maxi = 0;
        for (int i = n - 1; i >= 0; i--) {
            rmax[i] = maxi;
            maxi = max(maxi, bar[i]);
        }
        for (int i = 0; i < n; i++) {
            int lspace = lmax[i];
            int rspace = rmax[i];
            int space = min(lspace, rspace);
            if (space - bar[i] > 0) {
                water += (space - bar[i]);
            }
        }
        return water;
    }
};