class Solution {
public:
    int lcp(int i, int j, string& s, vector<vector<int>>&memo){
        if(i>j) return 0;
        if(i == j) return 1;

        int &ans = memo[i][j];
        if(ans != -1) return ans;

        if(s[i] == s[j]) return ans = 2 + lcp(i+1, j-1, s, memo);
        return ans = max(lcp(i+1, j, s, memo), lcp(i, j-1, s, memo));
    }
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> memo(n, vector<int>(n, -1));

        return lcp(0, n-1, s, memo);
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         if(s[i] == t[j]){
        //             dp[1][j+1] = dp[0][j] + 1;
        //         }else{
        //             dp[1][j+1] = max(dp[1][j], dp[0][j+1]);
        //         }
        //     }
        //     dp[0] = dp[1];
        // }
        // return dp[1][m];
    }
};