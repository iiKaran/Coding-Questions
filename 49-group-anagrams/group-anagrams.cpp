class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
            strs[i] = temp;
        }
        vector<vector<string>> ans;
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            if (mp.find(temp) != mp.end()) {
                ans.push_back(mp[strs[i]]);
                mp.erase(strs[i]);
            }
        }
        return ans;
    }
};