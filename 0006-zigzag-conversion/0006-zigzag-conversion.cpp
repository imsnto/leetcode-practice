class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        int n = s.size();
        if(numRows == 1 or n==1) return s;
        vector<string> ar(numRows);
        int idx = 0, step = 1;

        for(char c: s){
            ar[idx] += c;
            if(idx == 0) step = 1;
            else if(idx == numRows - 1) step = -1;

            idx += step;
        }
        for(string ss: ar) ans += ss;
        return ans;
    }
};