class Solution {
public:
    int toZigzag(vector<int> nums){
        int count = 0;
        for(int i=1; i<nums.size(); i+=2){
         if(i==nums.size()-1){
                if(nums[i] >= nums[i-1]){
                    count += nums[i] - nums[i-1] + 1;
                }
            }
            else if(nums[i] < nums[i-1] and nums[i] < nums[i+1]); 
       
            else{
                int mn = min(nums[i-1], nums[i+1]);
                count += (nums[i] - mn) + 1;
            }
        }
        int count2 = 0;
        for(int i=0; i<nums.size(); i+=2){
            if(i==0){
                if(nums[i] >= nums[i+1]) {
                    count2 += nums[i] - nums[i+1] + 1;
                }
            }
            else if(i == nums.size()-1){
                if(nums[i] > nums[i-1]){
                    count2 += nums[i]-nums[i-1] + 1;
                }
            }
            else if(nums[i] < nums[i-1] and nums[i] < nums[i+1]); 
            else{
                int mn = min(nums[i-1], nums[i+1]);
                count2 += (nums[i] - mn) + 1;
            }
        }
        return min(count, count2);
    }
    int movesToMakeZigzag(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        return toZigzag(nums);
    }
};