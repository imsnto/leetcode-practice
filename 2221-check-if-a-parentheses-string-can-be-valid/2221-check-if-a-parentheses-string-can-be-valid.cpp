class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n % 2) return false;


        int open = 0, unlocked = 0;
        for(int i=0; i<n; i++){
            if(locked[i] == '0') unlocked++;
            else if(s[i] == '(') open++;
            else{
                if(open > 0) open--;
                else if(unlocked > 0) unlocked--;
                else return false;
            }
        }

        if(open == 0) return true;

        int bal = 0;
        for(int i=n-1; i>=0; i--){
            if(locked[i] == '0') {
                bal--; 
            }
            else if(s[i] == '(') {
                bal++; open--;
            }
            else if(s[i] == ')') bal--;

            if(bal > 0) return false;

            if(open == 0 and bal ==0) break;
        }

        if(open > 0) return false;
        return true;
    }
};