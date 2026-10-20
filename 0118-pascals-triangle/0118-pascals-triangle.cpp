class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        v.push_back({1});
        int rows = 1;
        while (rows < numRows) {
            vector<int> curr;
            vector<int> previous = v.back();
            curr.push_back(1);
            for (int j = 1; j < previous.size(); j++) {
                int s = previous[j - 1] + previous[j];
                curr.push_back(s);
            }
            curr.push_back(1);
            v.push_back(curr);
            rows++;
        }
        return v;
    }
};