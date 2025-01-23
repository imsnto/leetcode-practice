class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        set<pair<int,int>> st;

        int n = grid.size(), m = grid[0].size();
        for(int i=0; i<n; i++){
            vector<pair<int,int>> vp;
            for(int j=0; j<m; j++){
                if(grid[i][j]) vp.push_back({i,j});
            }
            if(vp.size() > 1){
                for(auto it: vp) st.insert(it);
            }
        }

        for(int j=0; j<m; j++){
            vector<pair<int,int>> vp;
            for(int i=0; i<n; i++){
                if(grid[i][j]) vp.push_back({i,j});
            }
            if(vp.size() > 1){
                for(auto it: vp) st.insert(it);
            }
        }

        
        return st.size();
    }
};