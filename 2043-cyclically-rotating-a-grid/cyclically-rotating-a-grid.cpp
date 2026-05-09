class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        int layers = min(m, n) / 2;

        for (int l = 0; l < layers; l++) {
            vector<int> v;

            for (int j = l; j < n - l; j++) v.push_back(grid[l][j]);
            for (int i = l + 1; i < m - l - 1; i++) v.push_back(grid[i][n - l - 1]);
            for (int j = n - l - 1; j >= l; j--) v.push_back(grid[m - l - 1][j]);
            for (int i = m - l - 2; i > l; i--) v.push_back(grid[i][l]);

            int sz = v.size();
            int rot = k % sz;

            vector<int> t(sz);

            for (int i = 0; i < sz; i++) {
                t[i] = v[(i + rot) % sz];
            }

            int idx = 0;

            for (int j = l; j < n - l; j++) grid[l][j] = t[idx++];
            for (int i = l + 1; i < m - l - 1; i++) grid[i][n - l - 1] = t[idx++];
            for (int j = n - l - 1; j >= l; j--) grid[m - l - 1][j] = t[idx++];
            for (int i = m - l - 2; i > l; i--) grid[i][l] = t[idx++];
        }

        return grid;
    }
};