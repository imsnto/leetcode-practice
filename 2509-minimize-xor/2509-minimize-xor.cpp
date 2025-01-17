class Solution {
public:
   
    int minimizeXor(int num1, int num2) {
        int b = __builtin_popcount(num2);

        int ans = 0;
        for(int i=31; i>=0 and b>0; i--){
            if((1<<i) & num1) {
                ans |= (1<<i); b--;
            } 
        }

        for(int i=0; i<32 and b>0; i++){
            if(ans & (1<<i));
            else{
                b--; ans |= (1<<i);
            }
        }

        return ans;
    }
};