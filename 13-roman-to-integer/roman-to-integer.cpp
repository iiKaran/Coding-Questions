class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char, int> value;
        value['I'] = 1, value['V'] = 5, value['X'] = 10, value['L'] = 50,
        value['C'] = 100;
        value['D'] = 500, value['M'] = 1000;

        int big, small;
        big = small = 0;
        for (int i = 0; i < s.length(); i++) {
           int curr = value[s[i]], next = value[s[i + 1]];

            if (curr>=next) {
                ans +=curr;
            } else {
                ans += (next-curr);
                i++;
            }

            cout << "ans=" << ans;
        }
        return ans;
    }
};