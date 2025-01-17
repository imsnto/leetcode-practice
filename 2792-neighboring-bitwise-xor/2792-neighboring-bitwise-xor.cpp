class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        vector<int> org {1};
        int n = d.size();

        for(int i=1; i<n; i++){
            org.push_back(d[i-1] ^ org.back());
        }
        if(org.back() ^ d[n-1] == org[0]) return true;

        org = {0};
             for(int i=1; i<n; i++){
            org.push_back(d[i-1] ^ org.back());
        }
        if(org.back() ^ d[n-1] == org[0]) return true;

        return false;
    }
};