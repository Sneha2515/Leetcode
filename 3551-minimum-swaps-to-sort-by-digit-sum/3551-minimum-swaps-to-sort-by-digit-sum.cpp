class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            int num = nums[i];
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            v.push_back({sum, nums[i], i});
        }
        sort(v.begin(), v.end());
        vector<int> pos(n);
        for (int i = 0; i < n; i++) {
            pos[v[i][2]] = i;
        }
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            while (pos[i] != i) {
                int j = pos[i];
                swap(v[i], v[j]);
                swap(pos[i], pos[j]);
                swaps++;
            }
        }
        return swaps;
    }
};