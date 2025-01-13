class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        vector<int>cnt(26);
        for(char ch: s){
            cnt[ch-'a']++;
        }

        int ans = 0;
        for(int i=0; i<26; i++){
            if(cnt[i] > 0){
                if(cnt[i] % 2) ans++;
                else ans += 2;
            }
        }
        return ans;
    }
};