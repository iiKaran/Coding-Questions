class Solution {
    vector<vector<string>> ans; 
    unordered_map<string, int> conf; 
    string start; 

    void dfs(string curr, vector<string> path) {
        if (curr == start) {
            reverse(path.begin(), path.end()); 
            ans.push_back(path);
            reverse(path.begin(), path.end());
            return;  // Ensure we return after adding a valid path to the result
        }

        int len = curr.length(); 
        int step = conf[curr]; 
        for (int i = 0; i < len; i++) {
            char orig = curr[i]; 
            for (char ch = 'a'; ch <= 'z'; ch += 1) {
                if (ch != orig) { // Avoid changing to the same character
                    curr[i] = ch; 
                    if (conf.find(curr) != conf.end() && conf[curr] == step - 1) {
                        path.push_back(curr); 
                        dfs(curr, path); 
                        path.pop_back();
                    }
                }
            }
            curr[i] = orig;
        }
    }

public:
    vector<vector<string>> findLadders(string beginWord, string end, vector<string>& words) {
        start = beginWord;
        conf.clear();  // Clear conf map to ensure no residual values
        conf[beginWord] = 1; 
        unordered_set<string> st(words.begin(), words.end()); 
        queue<string> q; 
        int len = start.length();
        q.push(start); 

        while (!q.empty()) {
            string curr = q.front(); 
            q.pop(); 
            int steps = conf[curr]; 

            for (int i = 0; i < len; i++) {
                char orig = curr[i]; 
                for (char ch = 'a'; ch <= 'z'; ch += 1) {
                    if (ch != orig) { // Avoid changing to the same character
                        curr[i] = ch; 
                        if (st.count(curr) > 0) {
                            if (conf.find(curr) == conf.end() || conf[curr] > steps + 1) {
                                // Update conf only if not present or a shorter path is found
                                conf[curr] = steps + 1; 
                                q.push(curr); 
                                st.erase(curr); 
                            }
                        }
                    }
                }
                curr[i] = orig;
            }
        }

        if (conf.find(end) != conf.end()) {
            vector<string> path; 
            path.push_back(end); 
            dfs(end, path); 
        }
        return ans;
    }
};
