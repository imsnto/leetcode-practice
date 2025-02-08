class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto &it: nums){
            mp[it] = 1;
        }

        int ans = 0, last = -(1<<30);
        for(auto &it: mp){
            int cnt = 0;
            int curr = it.first;

            if(curr < last) continue;

            while(mp[curr]) {
                cnt++;  curr++;
            }

            last = curr;
            ans = max(ans, cnt);
        }

        return ans;

    }
};