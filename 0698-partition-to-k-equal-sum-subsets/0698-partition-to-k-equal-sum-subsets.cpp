class Solution {
public:
    int sum = 0;
    bool helper(int idx, vector<int>&equal, vector<int>&nums, int k){
        if(idx < 0 ) {
            int d = 0;
            for(int i: equal) 
                d += i == sum;
            return d == k;
        }
        for(int i=0; i<k; i++){
            if(equal[i] + nums[idx] <= sum ) {
                equal[i] += nums[idx];
                bool f = helper(idx-1, equal, nums, k);
                if(f) return f;
                equal[i] -= nums[idx];
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total = 0, n = nums.size();
        for(int i: nums) total += i;
        sum = total / k;
        if(total % k != 0) return false;
        vector<int> equal(k);
        int i= 0;
        sort(nums.begin(), nums.end());
        for(int j=n-1; j>n-k; j--) equal[i++] = nums[j];
        return helper(n-k, equal, nums, k);
    }
};