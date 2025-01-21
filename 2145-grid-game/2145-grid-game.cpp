class Solution {
public:
    long long gridGame(vector<vector<int>>& g) {
        int n = g[0].size();
        long long firstRowSum = accumulate(g[0].begin(), g[0].end(), 0LL);
        long long secondRowSum = 0, ans = LONG_LONG_MAX;

        for(int i=0; i<n; i++){
            firstRowSum -= g[0][i];
            ans = min(ans, max(firstRowSum, secondRowSum));
            secondRowSum += g[1][i];
        }
        return ans;
    }
};