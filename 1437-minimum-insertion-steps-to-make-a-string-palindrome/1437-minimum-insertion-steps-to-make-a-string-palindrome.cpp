class Solution {
public:
    int minInsertions(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        int n = s.size(), m = t.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1));
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
        return n - dp[1][m];
    }
};