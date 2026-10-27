class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid;
        string r(n, '.');
        string re(n - 1, '#');
        re += '.';
        grid.push_back(r);
        for (int i = 1; i < m; i++) {
            grid.push_back(re);
        }
        return grid;
    }
};