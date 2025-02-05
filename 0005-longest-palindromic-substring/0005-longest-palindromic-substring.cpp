class Solution {
public:
    string longestPalindrome(string s) {
        int left = 0, right = 0, n = s.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<=1; j++){
                int r = i+j, l = i;
                while(l>=0 and r < n and s[l] == s[r]){
                    l--; r++;
                }
                l++; r--;
                if(right - left < (r - l)) {
                    left = l; 
                    right = r;
                }
            }
        }
        return s.substr(left, right-left+1);
    }
};