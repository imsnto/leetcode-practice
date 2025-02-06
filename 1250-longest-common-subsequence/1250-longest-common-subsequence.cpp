class Solution {
public:
// int memo[1000][1000];
//     int lcs(string &s, string &t, int i, int j){
//         if(i<0 or j<0) return 0;
//         if(memo[i][j] !=-1) return memo[i][j];

//         if(s[i] == t[j])return memo[i][j] = 1 + lcs(s, t, i-1, j-1);
//         return memo[i][j] = max(lcs(s,t, i-1, j), lcs(s,t,i,j-1));
//     }
    int longestCommonSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++){
        //         memo[i][j] = -1;
        //     }
        // }

        // return lcs(s, t, n-1, m-1);

        vector<vector<int>> dp(2, vector<int>(m+1));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(s[i] == t[j]){
                    dp[1][j+1] = dp[0][j] + 1;
                }else{
                    dp[1][j+1] = max(dp[1][j], dp[0][j+1]);
                }
            }
            dp[0] = dp[1];
        }
        return dp[1][m];
    }
};