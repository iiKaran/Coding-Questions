#include <unordered_map>
#include <string>
#include <algorithm>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        std::unordered_map<char, int> freq;

        // Count the frequency of each character in the input text
        for (auto ch : text) {
            freq[ch] += 1;
        }

        // Required frequencies for each character in "balloon"
        std::unordered_map<char, int> req = {
            {'b', 1},
            {'a', 1},
            {'l', 2},
            {'o', 2},
            {'n', 1}
        };

        int ans = INT_MAX;

        // Calculate the maximum number of "balloon"s that can be formed
        for (auto ch : req) {
            if (freq.find(ch.first) != freq.end()) {
                ans = std::min(ans, freq[ch.first] / ch.second);
            } else {
                // If any character is missing, we can't form a single "balloon"
                return 0;
            }
        }

        return ans;
    }
};