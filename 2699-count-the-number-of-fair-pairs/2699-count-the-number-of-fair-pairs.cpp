class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans = 0;
        sort(nums.begin(), nums.end());
        vector<int> ar { nums[0]};

        for(int i=1; i<nums.size(); i++){
            int curr = nums[i];
            int mn = lower - curr; 
            int mx = upper - curr; 
            int nn = ar.size();

            int lo = lower_bound(ar.begin(), ar.end(), mn) - ar.begin();
            int hi = upper_bound(ar.begin(), ar.end(), mx) - ar.begin();

            ar.push_back(curr);
            if(lo >= nn) continue;
            if(hi < 0) continue;

            ans += hi - lo;
        }

        return ans;
    }
};