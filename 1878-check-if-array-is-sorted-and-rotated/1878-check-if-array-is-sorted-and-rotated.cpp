class Solution {
public:
    bool check(vector<int>& nums) {
        int mark = -1, cnt=0;
        for(int i=1; i<nums.size(); i++){
            if(mark != -1){
                if(mark < nums[i]) {
                    return false;
                }
            }
            if(nums[i] < nums[i-1]) {
                mark = nums[0]; if(nums[i] > nums[0]) return false;
                cnt++;
            }
            if(cnt > 1) return false;
        }return true;
    }
};