class Solution {
public:
    bool helper(int idx, vector<int>&nums, vector<int>&equal, int sum){
        if(idx< 0){
            int c = 0;
            for(int &i: equal) c += sum == i;
            return c == (int)equal.size();
        }
        for(int j=0; j<equal.size(); j++){
            if(nums[idx] + equal[j] <= sum){
            equal[j] += nums[idx];
            bool f = helper(idx-1, nums, equal, sum);
            if(f) return f;
            equal[j] -= nums[idx];
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> equal(k);
        int sum = 0;
        for(int i: nums) sum += i;
        if(sum % k != 0) return false;
        sum /= k;
        sort(nums.begin(), nums.end());
        int i = 0;
        for(int j=n-1; j>n-k; j--) equal[i++] = nums[j];
        return helper(n-k, nums, equal, sum);
    }
};