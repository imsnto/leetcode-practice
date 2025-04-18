class Solution {
public:
    string RLE(int n){
        if(n == 1) return "1";

        string res = RLE(n-1);
        string ret ;
        int i = 0; 
        while(i<res.size()) {
            char c = res[i];
            int cnt = 0;
            while(i<res.size() and c == res[i]) {
                cnt ++; i++;
            }
            ret += to_string(cnt) + string(1, c);
        }
        return ret;
    }
    string countAndSay(int n) {
        return RLE(n);
    }
};