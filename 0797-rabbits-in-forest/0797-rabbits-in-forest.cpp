class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> cnt;

        for(int i: answers){
            cnt[i]++;
        }
        int ans = 0;
        for(auto it: cnt){
            if(it.first == 0){
                ans += it.second; continue;
            }
            int s = it.second;
            int f = it.first;
            ans +=  (s/(f+1)) * (f+1);
            ans += (s % (f+1)) == 0? 0: f+1;
        }
        return ans;
    }
};