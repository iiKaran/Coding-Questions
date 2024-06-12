class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;

        // Initialize the queue with all the cells that contain 0 and set their distance to 0
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 0) {
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        // Directions array to move in 4 directions: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        // Process the queue using BFS
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            for (auto [di, dj] : directions) {
                int ni = i + di, nj = j + dj;
                if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                    if (ans[ni][nj] > ans[i][j] + 1) {
                        ans[ni][nj] = ans[i][j] + 1;
                        q.push({ni, nj});
                    }
                }
            }
        }

        return ans;
    }
};
