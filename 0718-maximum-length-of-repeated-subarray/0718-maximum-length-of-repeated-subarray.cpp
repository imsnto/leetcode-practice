class Solution {
public:
int mx ;
    int mlrs(int i, int j, vector<int>&nums1, vector<int>&nums2, vector<vector<int>>&memo){
        if(i<0 or j<0) return 0;

        
        int &ans = memo[i][j];
        if(ans != -1) return ans;

        ans = 0;
        if(nums1[i] == nums2[j])  ans = 1+mlrs(i-1, j-1, nums1, nums2, memo);
        mlrs(i-1, j, nums1, nums2, memo) ;
        mlrs(i, j-1, nums1, nums2, memo);
        mx = max(mx, ans);
        return ans;

    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(); mx = 0;
        vector<vector<int>> memo(n,vector<int>(m, -1));

         mlrs(n-1, m-1, nums1, nums2, memo);
         return mx;
    }
};