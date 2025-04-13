class Solution {
public:

    int movesToMakeZigzag(vector<int>& nums) {
        int res[2] = {0, 0}, left, right, n = nums.size();
        for(int i=0; i<n; i++){
            left = i>0 ? nums[i-1] : 10001;
            right = i+1 < n ? nums[i+1] : 10001;

            res[i%2] += max(0, nums[i] - min(left, right) + 1);
        }
        return min(res[0], res[1]);
    }
};