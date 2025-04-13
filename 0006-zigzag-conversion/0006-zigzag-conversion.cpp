class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        int n = s.size();
        if(n==1 or numRows==1) return s;

        int distance = numRows * 2;
        int first = distance, second = -2;

        for(int i=0; i<numRows; i++){
            first -= 2; second += 2;

            int idx = i;
            while(idx < n){
                ans += s[idx];
                if(first != 0) idx += first;
                else idx += second;
                if(idx < n) ans += s[idx];
                if(second != 0) idx += second;
                else idx += first;
            }
        }
        return ans;
    }
};