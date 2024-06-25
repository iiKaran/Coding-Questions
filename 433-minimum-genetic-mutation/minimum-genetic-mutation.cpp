class Solution {
    public :
int minMutation(std::string start, std::string end, std::vector<std::string>& bank) {
        if (start == end)
            return 0;
        if (bank.size() == 0)
            return -1;

        std::unordered_set<std::string> st(bank.begin(), bank.end());
        if (st.count(end) == 0)
            return -1;

        std::queue<std::string> q;
        q.push(start);

        std::vector<char> pos = {'A', 'C', 'G', 'T'};
        int cnt = 0;

        while (!q.empty()) {
            int size = q.size();
            cnt++; // Increment mutation count for each level of BFS
            while (size > 0) {
                size--;
                std::string curr = q.front();
                q.pop();

                for (int i = 0; i < curr.length(); i++) {
                    char ch = curr[i];
                    for (int j = 0; j < 4; j++) {
                        if (ch != pos[j]) {
                            curr[i] = pos[j];
                            if (curr == end)
                                return cnt;

                            if (st.count(curr) > 0) {
                                q.push(curr);
                                st.erase(curr);
                            }
                        }
                    }
                    curr[i] = ch; // Restore the original character
                }
            }
        }
        return -1;
    }
};