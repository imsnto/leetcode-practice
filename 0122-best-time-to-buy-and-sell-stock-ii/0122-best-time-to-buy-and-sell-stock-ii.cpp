class Solution {
public:
    int rec(int idx, bool buy, vector<vector<int>>&dp, vector<int>&prices){
        if(idx == prices.size()) return 0;

        int &ans = dp[idx][buy];
        if(ans != -1) return ans;

        if(buy){
            ans = max(-prices[idx] + rec(idx+1, 0, dp, prices), 0+rec(idx+1, 1, dp, prices));
        }else{
            ans = max(prices[idx] + rec(idx+1, 1, dp, prices), 0+rec(idx+1, 0, dp, prices));
        }
        return ans;

    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1, vector<int>(2, -1));

        return rec(0, 1, dp, prices);
    }
};