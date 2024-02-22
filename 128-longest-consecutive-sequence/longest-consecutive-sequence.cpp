class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        if (arr.size() == 1 || arr.size() == 0)
            return arr.size();

        sort(arr.begin(), arr.end());

        int i = 0, j = 1;
        int len = 0, sofar = 0;
        while (j < arr.size()) {

            if (arr[j] == arr[i] + 1) {
                sofar++;
                len = max(len, sofar);
                i++;
                j++;
            } else if (arr[j] == arr[i]) {
                j++;
                i++;
            } else {
                sofar = 0;
                i++;
                j++;
            }
        }
        return len + 1;
    }
};