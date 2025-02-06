class Solution {
public:
    int minStep(int l, int r, string &s, vector<vector<int>>&memo){
        if(l>r) return 0;
        int &ans = memo[l][r];
        if(ans != -1) return ans;

        if(s[l] == s[r]) return ans = minStep(l+1, r-1, s, memo);
        return ans = 1 + min(minStep(l+1, r, s, memo), minStep(l, r-1, s, memo));
    }
    
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> memo(n, vector<int>(n, -1));

        return minStep(0, n-1, s, memo);
       
    }
};