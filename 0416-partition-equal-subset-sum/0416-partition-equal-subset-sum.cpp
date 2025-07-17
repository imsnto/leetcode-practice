class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i: nums) 
            sum += i;
        if(sum % 2 != 0) 
            return  false;
        
        int n = nums.size();
        sum /= 2;

        vector<vector<bool>> dp(n, vector<bool>(sum+1));
        for(int i=0; i<n; i++){
            dp[i][0] = true;
        }

        if(nums[0] <= sum) {
            dp[0][nums[0]] = 1;
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<=sum; j++){
                dp[i][j] = dp[i-1][j];
                if(j - nums[i] >= 0 ) {
                    dp[i][j]   = dp[i][j] | dp[i-1][j-nums[i]];
                }
            }
        }
        for(int i=0; i<n; i++){
            if(dp[i][sum]) return true;
        }
        return false;
    }
};