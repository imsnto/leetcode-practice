class Solution {
public:
    string clearDigits(string s) {
        string ans;
        int due = 0;
        for(char c: s){
            if(c >='0' and c <='9') {
                if(ans.size() > 0) ans.pop_back();
                else due++;
            }
            else ans+=c;
            if(due>0 and ans.size() > 0) {ans.pop_back(); due--;}
        }
        return ans;
    }
};