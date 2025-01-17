class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size(), cnt=0;
        vector<int> seen(n+1);

        vector<int> ans;
        for(int i=0; i<n; i++){
            seen[A[i]]++; 
            if(seen[A[i]] == 2) cnt++;
            
            seen[B[i]]++;
            if(seen[B[i]] == 2) cnt++;

            ans.push_back(cnt);
        }
        return ans;
    }
};