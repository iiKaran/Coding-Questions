class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(), cit.end());
        int h = cit.size();
        while (h >= 0) {
            int cnt = 0;
            for (int i = cit.size()-1; i >=0; i--) {
                if (cit[i] >= h) {
                    cnt++;
                }
                else
                break;
                
            }
            if (cnt >= h)
                return h;

                h--;
        }
        return 0;
    }
};