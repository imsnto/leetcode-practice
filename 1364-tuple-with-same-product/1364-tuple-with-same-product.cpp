class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int, vector<pair<int,int>>> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                mp[nums[i] * nums[j]].push_back({i,j});
            }
        }

        int ans = 0; 
        set<int> st;

        for(auto it: mp){
            int key = it.first;
            int sz = it.second.size();

            ans += (sz * (sz-1) / 2) * 8;

        }
        return ans;
    }
};