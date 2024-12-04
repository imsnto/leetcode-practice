class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(); 
        int m = t.size();
        int i=0, j=0;
        while(i<n){
            char ch ;
            if(s[i] !='z') ch=char(s[i] + 1);
            else ch='a';
            if(s[i] == t[j] or ch==t[j]){
                j++;
            }
            i++; 
            if(j==m) return true;
        }
        return false;
    }
};