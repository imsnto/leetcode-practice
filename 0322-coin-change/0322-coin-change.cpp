class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int mx = (int)1e8;
        vector<int> dp(amount + 1, mx);
        dp[0] = 0;
        int n = coins.size();
        for(int i=1; i<=amount; i++){
            for(int coin: coins){
                if(i>=coin) dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
        return dp[amount] >= mx ? -1: dp[amount];
    }
};