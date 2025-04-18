class Solution {
public:

    string countAndSay(int n) {
        string res = "1";
        for(int k=2; k<=n; k++){
        
        string ret ;
        int i = 0, nn=res.size();

        while(i<nn) {
            char c = res[i];
            int cnt = 0;
            while(i<nn and c == res[i]) {
                cnt ++; i++;
            }
            ret += to_string(cnt) + string(1, c);
        }
        res = ret;
        }
        return res;
    }
};