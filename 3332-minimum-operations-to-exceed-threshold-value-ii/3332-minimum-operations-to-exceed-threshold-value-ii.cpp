class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        multiset<long> ms;
        for(int &i: nums) {
            ms.insert(i);
        }

        int ans = 0;
        while(ms.size() > 1){
            long a = *ms.begin();
            ms.erase(ms.begin());
            long b = *ms.begin(); 
            ms.erase(ms.begin());

            if(min(a, b) < k){
                ms.insert(min(a,b) * 2 + max(a, b)); ans++;
            }
            else break;
        }
        return ans;
    }
};