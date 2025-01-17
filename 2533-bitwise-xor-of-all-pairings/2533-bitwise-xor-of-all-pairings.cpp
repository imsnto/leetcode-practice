class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int ans = 0;
        if(m % 2){
        for(int i: nums1){
                ans ^= i;
        }}

        if(n % 2){
        for(int i: nums2){
                ans ^= i;
        }}

        return ans;
    }
};