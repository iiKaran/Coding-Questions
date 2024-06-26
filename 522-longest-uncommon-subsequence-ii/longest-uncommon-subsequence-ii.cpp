bool cmp(const string &a, const string &b) {
    return a.size() > b.size();
}

class Solution {
    bool check(const string &a, const string &b) {
        int i = 0;
        int j = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] == b[j]) i++;
            j++;
        }
        return (i == a.size());
    }

    bool checkTillI(const vector<string> &strs, const string &s, int ind) {
        for (int i = 0; i <= ind; i++) {
            if (check(s, strs[i])) return true;
        }
        return false;
    }

public:
    int findLUSlength(vector<string> &strs) {
        unordered_map<string, int> freq;
        sort(strs.begin(), strs.end(), cmp);

        for (const auto &st : strs) {
            freq[st]++;
        }

        int n = strs.size();
        for (int i = 0; i < n; i++) {
            string str = strs[i];

            if (freq[str] > 1) {
                continue;
            }

            if (!checkTillI(strs, str, i - 1)) {
                return str.size();
            }
        }
        return -1;
    }
};