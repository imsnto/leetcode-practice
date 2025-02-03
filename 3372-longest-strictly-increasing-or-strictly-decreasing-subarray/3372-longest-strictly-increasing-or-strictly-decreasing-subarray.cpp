class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1, cnt = 1, n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] > nums[i-1]) cnt++;
            else cnt = 1;
            ans = max(ans, cnt);
        }
        cnt = 1;
        for(int i=1; i<n; i++){
            if(nums[i] < nums[i-1]) cnt++;
            else cnt = 1;
            ans = max(ans, cnt);
        }
        return ans;
    }
};