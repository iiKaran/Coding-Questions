class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(), cit.end());
        int h = cit.size();
        while (h >= 0) {
            int cnt = 0;
            for (int i = 0; i < cit.size(); i++) {
                if (cit[i] >= h) {
                    cnt++;
                }
            }
            if (cnt >= h)
                return h;

                h--;
        }
        return 0;
    }
};