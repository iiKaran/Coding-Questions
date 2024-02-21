class Solution {
public:
    int lengthOfLongestSubstring(string str) {

        if (str.length() == 0)
            return 0;
        unordered_map<char, int> mp;

        int i = 0, j = 0, n = str.length();

        int len = 1;
        string temp = "";
        while (j < n) {
            char curr = str[j];
            if (mp[curr] > 0) {

                for (int index = i; index < j; index++) {
                    if (mp[curr] > 0) {
                        mp[str[index]]--;
                        i++;
                    }
                }
            }
            temp += curr;
            mp[curr]++;

            len = max(len, (j - i)+1);
            j++;
        }
        return len;
    }
};