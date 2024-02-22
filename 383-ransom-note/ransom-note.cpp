class Solution {
public:
    bool canConstruct(string target, string src) {

        unordered_map<char, int> mp;

        for (auto i : src) {
            mp[i]++;
        }
        for (auto i : target) {
            if (mp[i] == 0 || mp.find(i) == mp.end())
                return false;

            else
                mp[i]--;
        }
        return true;
    }
};